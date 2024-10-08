import cv2

# Load the cascades
face_cascade = cv2.CascadeClassifier(cv2.data.haarcascades + 'haarcascade_frontalface_default.xml')
eye_cascade = cv2.CascadeClassifier(cv2.data.haarcascades + 'haarcascade_eye.xml')

# To capture video from webcam.
cap = cv2.VideoCapture(0)

while True:
    # Read the frame
    _, img = cap.read()

    # Convert to grayscale
    gray = cv2.cvtColor(img, cv2.COLOR_BGR2GRAY)

    # Detect the faces
    faces = face_cascade.detectMultiScale(gray, 1.5, 7)

    # Draw the rectangle around each face and detect eyes within the face
    for (x, y, w, h) in faces:
        cv2.rectangle(img, (x, y), (x + w, y + h), (255, 0, 0), 2)
        roi_gray = gray[y:y + h, x:x + w]
        roi_color = img[y:y + h, x:x + w]
        eyes = eye_cascade.detectMultiScale(roi_gray)

        # Initialize min and max coordinates for eyes
        ex_min, ey_min, ex_max, ey_max = float('inf'), float('inf'), 0, 0

        for (ex, ey, ew, eh) in eyes:
            ex_min = min(ex_min, ex)
            ey_min = min(ey_min, ey)
            ex_max = max(ex_max, ex + ew)
            ey_max = max(ey_max, ey + eh)

        # Draw a rectangle around both eyes
        if len(eyes) > 0:
            cv2.rectangle(roi_color, (ex_min, ey_min), (ex_max, ey_max), (0, 255, 0), 2)

    # Display
    cv2.imshow('img', img)

    # Stop if escape key is pressed
    k = cv2.waitKey(30) & 0xff
    if k == 27:
        break

# Release the VideoCapture object
cap.release()
