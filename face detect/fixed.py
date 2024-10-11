                                                                                                                           # import serial
# import time
import cv2
import os

face_cascade = cv2.CascadeClassifier(cv2.data.haarcascades + 'haarcascade_frontalface_default.xml')
cap = cv2.VideoCapture(0)

base_folder = 'captured_data'
if not os.path.exists(base_folder):
    os.makedirs(base_folder)

file_count = 0

rgb_folder = os.path.join(base_folder, 'RGB')
if not os.path.exists(rgb_folder):
    os.makedirs(rgb_folder)
gray_folder = os.path.join(base_folder, 'Grayscale')
if not os.path.exists(gray_folder):
    os. makedirs(gray_folder)
binary_folder = os.path.join(base_folder, 'Binary')
if not os.path.exists(binary_folder):
    os.makedirs(binary_folder)
data_folder = os.path.join(base_folder, 'Data')
if not os.path.exists(data_folder):
    os.makedirs(data_folder)

rgb_filename = f'img_{file_count}_rgb.jpg'
gray_filename = f'img_{file_count}_gray.jpg'
binary_filename = f'img_{file_count}_binary.jpg'
data_filename = f'data{file_count}.txt'

while True:
    _, img = cap.read() #main_window
    _, img_frame = cap.read() #rgb_taken
    gray = cv2.cvtColor(img, cv2.COLOR_BGR2GRAY) #gray_taken
    _, binary = cv2.threshold(gray, 110,255, cv2.THRESH_BINARY) #bin_taken
    faces = face_cascade.detectMultiScale(gray, 1.1, 5)


    for (x, y, w, h) in faces:
        # --------------------------------------------------------------------------------------------------------------------------------------------------------
        #NormalPanel

        # Main BB
        cv2.rectangle(img, (x, y), (x + w, y + h), (0, 255, 0), 2)
        # Coor Main
        main_coordinates_text = f'Main: ({x}, {y})'
        cv2.putText(img, main_coordinates_text, (x, y - 10), cv2.FONT_HERSHEY_SIMPLEX, 0.5, (0, 255, 0), 2)
        # Size Main
        main_size_text = f'{w} x {h} pixels'
        cv2.putText(img, main_size_text, (x, y + h + 15), cv2.FONT_HERSHEY_SIMPLEX, 0.5, (0, 255, 0), 2)

        # Inner BB
        inner_x, inner_y, inner_w, inner_h = x + 20, y + 35, w - 40, h - 80 # make changes here!
        inner = cv2.rectangle(img, (inner_x, inner_y), (inner_x + inner_w, inner_y + inner_h), (0, 0, 255), 2)
        # Coor Inner
        inner_coordinates_text = f'Inner: ({inner_x}, {inner_y})'
        cv2.putText(img, inner_coordinates_text, (inner_x, inner_y - 10), cv2.FONT_HERSHEY_SIMPLEX, 0.5, (0, 0, 255), 2)
        # Size Inner
        inner_size_text = f'{inner_w} x {inner_h} pixels'
        cv2.putText(img, inner_size_text, (inner_x, inner_y + inner_h + 15), cv2.FONT_HERSHEY_SIMPLEX, 0.5, (0, 0, 255), 2)
        #--------------------------------------------------------------------------------------------------------------------------------------------------------
        # BinaryPanel

        ix, iy, iw, ih = x + 20, y + 35, w - 40, h - 80
        ic = img_frame [iy:iy+ih, ix:ix+iw]
        gc = gray[iy:iy+ih, ix:ix+iw]
        bc = binary[iy:iy+ih, ix:ix+iw]

        data = (bc/255).astype(int)


        if 130 <= w <= 150 and 130 <= h <= 150:

            cv2.putText(img, "in range, keep steady", (10, 21), cv2.FONT_HERSHEY_SIMPLEX, 0.5, (0, 255, 0), 2)
            print(data)

            cv2.imwrite(os.path.join(rgb_folder, rgb_filename), ic)
            cv2.imwrite(os.path.join(gray_folder, gray_filename), gc)
            cv2.imwrite(os.path.join(binary_folder, binary_filename), bc)


            with open(os.path.join(data_folder, data_filename), 'w') as file:
                for row in data:
                    file.write(''.join(map(str, row)) + '\n')


            file_count += 1
            rgb_filename = f'img_{file_count}_rgb.jpg'
            gray_filename = f'img_{file_count}_gray.jpg'
            binary_filename = f'img_{file_count}_binary.jpg'
            data_filename = f'data{file_count}.txt'

        elif 151 <= w <= 170 and 151 <= h <= 170:
            cv2.putText(img, f"don't get close: {inner_w} x {inner_h}", (10, 21), cv2.FONT_HERSHEY_SIMPLEX, 0.5, (0, 185, 255), 2)
        elif 119 <= w <= 129 and 119 <= h <= 129:
            cv2.putText(img, f"you are too far: {inner_w} x {inner_h}", (10, 21), cv2.FONT_HERSHEY_SIMPLEX, 0.5, (0, 185, 255), 2)

        else :
            cv2.putText(img, "out of range", (10, 21), cv2.FONT_HERSHEY_SIMPLEX, 0.5, (0, 0, 255), 2)


    # Display
    cv2.imshow('main', img)
    # cv2.imshow('gray', gc)
    # cv2.imshow('img', ic)
    cv2.imshow('bin', binary)
D

