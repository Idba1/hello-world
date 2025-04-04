import cv2

# Open the camera
cam = cv2.VideoCapture(0)

# Check if the camera opened successfully
if not cam.isOpened():
    print("Error: Could not open camera.")
else:
    while True:
        # Capture frame-by-frame
        ret, frame = cam.read()

        # Check if frame was read correctly
        if not ret:
            print("Failed to grab frame")
            break

        # Display the resulting frame
        cv2.imshow('my cam', frame)

        # Break the loop if 'q' is pressed
        if cv2.waitKey(1) & 0xFF == ord('q'):
            break

    # Release the camera and close the window
    cam.release()
    cv2.destroyAllWindows()
