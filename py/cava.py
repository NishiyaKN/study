import pyautogui
import subprocess
import fnmatch

# spawn a process with Popen in order to execute more code while it runs
p1 = subprocess.Popen(["sudo","zypper","in","cava"], stdout=subprocess.PIPE,text=True)
while True:
    # output will constantly receive each line of output by the process 
    output = p1.stdout.readline()
    # If there is some text on the var then prints it while removing spaces before and after the text
    if output:
        print(output.strip())
    # If there is nothing it means it has finished the execution
    else:
        break
    # Match for a string with NEW on each line, if found, send enter
    if fnmatch.fnmatch(output.strip(),"*NEW*"):
        pyautogui.press("y")
        pyautogui.press("Enter")
