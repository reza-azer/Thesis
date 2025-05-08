import serial
import cv2
import time
import numpy as np
import os

# Set the serial port name and baud rate to match the Arduino
ser = serial.Serial('COM2', 115200)
time.sleep(5)


def send_2d_array(img_arr):
    rows, cols = img_arr.shape
    # TipeUji = "senang"

    # ser.write(str(TipeUji).encode())
    # ser.write(b' ')
    ser.write(str(rows).encode())  # Send the number of rows
    ser.write(b' ')
    ser.write(str(cols).encode())  # Send the number of columns
    ser.write(b' ')

    for row in img_arr:
        for item in row:
            ser.write(str(item).encode())  # Convert int to bytes and send
            ser.write(b',')  # Send a separator

    ser.write(b'\n')  # Send a newline character to indicate the end of the array


def image_to_binary_array(image):
    try:
        _, binary_image = cv2.threshold(image, 75, 255, cv2.THRESH_BINARY)
        binary_array = (binary_image / 255).astype(int)  # Convert to binary (0 and 1)
        return binary_array
    except Exception as e:
        print(f"Error: {e}")
        return None


def process_images_from_folder(folder_path):
    # Get a list of all files in the folder
    image_files = [f for f in os.listdir(folder_path) if f.endswith(('.png', '.jpg', '.jpeg', '.bmp', '.tiff'))]

    for image_file in image_files:
        image_path = os.path.join(folder_path, image_file)
        nose_img = cv2.imread(image_path, cv2.IMREAD_GRAYSCALE)  # Read grayscale image
        if nose_img is not None:
            data_to_send = image_to_binary_array(nose_img)
            if data_to_send is not None:
                send_2d_array(data_to_send)
                print(f"Sent image: {image_file}")
        else:
            print(f"Gagal membaca gambar: {image_file}")

        time.sleep(2)  # Delay between sending images


# Ask the user for the folder path
folder_path = input("Masukkan path folder gambar (atau ketik 'exit' untuk keluar): ")
while folder_path.lower() != 'exit':
    if os.path.isdir(folder_path):
        process_images_from_folder(folder_path)
    else:
        print("Path folder tidak valid. Pastikan path benar.")

    folder_path = input("Masukkan path folder gambar (atau ketik 'exit' untuk keluar): ")

# Close the serial port before exiting
ser.close()