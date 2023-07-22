import subprocess
import os

# def update_zypper():
#     print("Updating packages from zypper")
#     subprocess.Popen(["sudo","zypper","dup"]).wait()

# def update_flatpak():
#     print("Updating packages from flatpak")
#     subprocess.Popen(["sudo","flatpak","update"]).wait()

# Goes throught every directory inside opt to update it
def update_github(lst):
    for i in lst:
        # Set the the directory's full path
        dir = "/opt/" + str(i)
        os.chdir(dir)
        print("Updating " + dir)
        subprocess.run(["git","pull"])
        print("Finished")
        print()

dir_list = []
os.chdir("/opt")
# List all directories under /opt
ls = subprocess.Popen(("ls"), stdout=subprocess.PIPE)
# Use wc -l to see how many directories are there
dir_number = int(subprocess.check_output(["wc","-l"],stdin=ls.stdout,text=True))
# Get's the text output of ls
output = subprocess.check_output("ls",text=True)

# Split the output var, which has dir_number names of directories, in individual strings
# Then add them to our dir_list
for i in output.split():
    dir_list.append(i)

# Warns how many and which directories exists
print("There are", dir_number, "git directories inside /opt:")
for i in dir_list:
    print(i)

# Use lower since it will be the same letter if the user inputs a Y or N
user_input = input("Do you want to update all of them? (y/n)\n").lower()
while True:
    if user_input == "y":
        update_github(dir_list)
        user_input2 = input("Do you also want to update zypper and flatpak?")
        if user_input2 == "y":
            update_others()
        else:
            print("Ok...")
        break
    elif user_input == "n":
        print("Okay, goodbye~")
        break
    else:
        print("Invalid option")
