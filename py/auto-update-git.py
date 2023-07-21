import subprocess
import os

dir_list = []
os.chdir("/opt")
ls = subprocess.Popen(("ls"), stdout=subprocess.PIPE)
# dir_number = subprocess.Popen(("wc","-l"), stdin=ls.stdout, stdout=subprocess.DEVNULL) 
dir_number = int(subprocess.check_output(["wc","-l"],stdin=ls.stdout,text=True))
output = subprocess.check_output("ls",text=True)

for i in output.split():
    dir_list.append(i)

print("There are", dir_number, "git directories inside /opt:")
for i in dir_list:
    print(i)

user_input = input("Do you want to update all of them? (Y/N)\n").lower
while True:
    if user_input == "y":
        for i in dir_list:
            dir = "/opt/" + str(i)
            os.chdir(dir)
            print("Updating " + dir)
            subprocess.Popen(("git","pull")).wait()
            print("Finished")
            print()
        break
    elif user_input == "n":
        print("Okay, goodbye~")
        break
    else:
        print("Invalid option")
