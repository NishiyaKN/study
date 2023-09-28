import pyautogui 
import time
i = 0

while True:

    currentMouseX, currentMouseY = pyautogui.position()
    pyautogui.moveTo(530,368)
    pyautogui.click()
    pyautogui.moveTo(currentMouseX,currentMouseY)
    if i == 0:
        pyautogui.move(1,0, duration=0.1)
        i=1
    else:
        pyautogui.move(-1,0, duration=0.1)
        i=0

    time.sleep(5)
