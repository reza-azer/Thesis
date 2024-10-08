import serial
import time
import cv2
import os
face_cascade = cv2.CascadeClassifier(cv2.data.haarcascades + 'haarcascade_frontalface_default.xml')
cap = cv2.VideoCapture(1)
while True:
    _, img = cap.read()
    gray = cv2.cvtColor(img, cv2.COLOR_BGR2GRAY)
    _, binary = cv2.threshold(gray, 110,255, cv2.THRESH_BINARY)
    _, binary_win = cv2.threshold(gray, 110, 255, cv2.THRESH_BINARY)
    faces = face_cascade.detectMultiScale(gray, 1.1, 4)

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

        bin = cv2.rectangle(binary, (x, y), (x + w, y + h), (0, 255, 0), 2)

        ix, iy, iw, ih = x + 20, y + 35, w - 40, h - 80
        bin_cropped = cv2.rectangle(binary, (ix, iy), (ix + iw, iy + ih), (0, 255, 0), 2)

        bin_face = bin[y:y+h, x:x+w]
        bc = binary[iy:iy+ih, ix:ix+iw]

        bin_normalized = (bc/255).astype(int)
        data = bin_normalized[:30,:30]


        if 130 <= w <= 150 and 130 <= h <= 150:

            cv2.putText(img, "in range", (10, 21), cv2.FONT_HERSHEY_SIMPLEX, 0.5, (0, 255, 0), 2)
            print(data)
            ser = serial.Serial('COM2', 9600)
            time.sleep(2)

            ser.write(b'[\n')
            for row in data:
                ser.write(b'[')
                for element in row:
                    ser.write(str(element).encode())
                    ser.write(b'')
                ser.write(b']\n')
            ser.write(b']\n')
            ser.close()

        elif 151 <= w <= 170 and 151 <= h <= 170:
            cv2.putText(img, f"entering range: {inner_w},{inner_h}", (10, 21), cv2.FONT_HERSHEY_SIMPLEX, 0.5, (0, 185, 255), 2)
        elif 119 <= w <= 129 and 119 <= h <= 129:
            cv2.putText(img, f"entering range: {inner_w},{inner_h}", (10, 21), cv2.FONT_HERSHEY_SIMPLEX, 0.5, (0, 185, 255), 2)

        else :
            cv2.putText(img, "out of range", (10, 21), cv2.FONT_HERSHEY_SIMPLEX, 0.5, (0, 0, 255), 2)


    # Display
    cv2.imshow('img', img)
    cv2.imshow('gray', gray)
    cv2.imshow('binary', binary_win)
    cv2.imshow('data taken', bc)
    # Stop if escape key is pressed
    k = cv2.waitKey(30) & 0xff
    if k == 27:
        break

# Release the VideoCapture object
cap.release()
cv2.destroyAllWindows()

# Task
# Normalized:checked
# Capture data:
#     Save matrix:
#     face rgb, binary, gray:
#output extended: checked (up to 30 rows x columns)
