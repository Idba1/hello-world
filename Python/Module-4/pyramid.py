import pyautogui
import time

rows = int(input("Enter the number of rows: "))
time.sleep(3)

for i in range(1, rows):
    line = "#" * i
    pyautogui.typewrite(line)
    pyautogui.press("enter")