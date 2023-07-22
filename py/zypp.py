import pyautogui
import subprocess
import fnmatch

p1 = subprocess.Popen(["sudo","zypper","dup"], stdout=subprocess.PIPE, text=True)
while True:
    output = p1.stdout.readline().strip()
    if output:
        print(output.strip())
    else:
        break
    if fnmatch.fnmatch(output.strip(),"*NEW*"):
        pyautogui.press("Enter")
