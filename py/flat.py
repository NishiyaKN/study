import pyautogui
import subprocess
import fnmatch

p1 = subprocess.Popen(["sudo","flatpak","update","--assumeyes"], stdout=subprocess.PIPE, text=True)
while True:
    output = p1.stdout.readline()
    if output == '' and p1.poll() is not None:
        break
    if output:
        print(output.strip())
