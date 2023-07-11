# print("Hello World", "Goodbye", end=" ",sep=" and ")
# print("you")

#############################################################################################

# var = int(input("Enter a number to calculate it's double: "))
# print("Double:", var*2)

#############################################################################################

# fnam = input("May I have your first name?")
# lnam= input("May I have your last name?")
# print("Thank you.")
# print("\nYour name is",fnam,lnam,".")

#############################################################################################

# hour = int(input("Starting time (hours): "))
# mins = int(input("Starting time (minutes): "))
# dura = int(input("Event duration (minutes): "))

# end_mins = (mins + dura)%60
# end_hour = (hour + (mins+dura)//60)%24

# print(end_hour,end_mins,sep=":")

#############################################################################################

# var = int(input("type any number and I will say if its odd or even"))
# if (var % 2 == 0):
#     print("It's even")
# else:
#     print("It's odd")

#############################################################################################

# print("Verify which of the 3 numbers inputed by the user is the largest")

# number_1 = int(input("Type the first number "))
# number_2 = int(input("Type the second number "))
# number_3 = int(input("Type the third number "))

# print("\nThe largest number is:",max(number_1,number_2,number_3))

#############################################################################################

# var = input()

# if var == "Spathiphyllum":
#     print("Yes - Spathiphyllum is the best plant ever!")
# elif var == "spathiphyllum":
#     print("No, I want a big Spathiphyllum!")
# else:
#     print("Spathiphyllum! Not " + var + "!")

#############################################################################################

# income = float(input("Enter the annual income: "))

# if income < 85528:
#     tax = (income * 0.18) - 556.02
# else:
#     tax = 14829.02 + (income - 85528) * 0.32

# tax = round(tax, 0)
# if tax < 0:
#     tax = 0

# print("The tax is:", tax, "thalers")

#############################################################################################

# year = int(input("Type the year: "))

# if year > 1582:
#     if year % 4 != 0:
#         common = True
#     elif year % 100 != 0:
#         common = False
#     elif year % 400 != 0:
#         common = True
#     else:
#         common = False

#     if common == True:
#         print("Common year")
#     else:
#         print("Leap year")
# else:
#     print("Not a gregorian year")

##############################################################################################

#even = 0
#odd = 0
#n = 0
#while n != -1:
#    n = int(input("Type a number to add to the even or odd group\nType -1 to exit\n"))
#    if n % 2 == 0:
#        even+=1
#    else:
#        odd+=1

#print("Odd:",odd-1)
#print("Even:",even)

#############################################################################################

# secret_number = 777
# print("Guess the secret number to exit the loop")
# n = 0
# while n != 777:
#     n = int(input())
#     if n != 777:
#         print("Ha ha! you're stuck in my loop!\nTry again!")
# print("Well done, muggle! You are free now.")

#############################################################################################

# import time
# for i in range(1,6):
#     print(i,"Mississipi")
#     time.sleep(1)
# print("Ready or not, here I come!")

#############################################################################################

# while True:
#     print("Type the secret word to exit the loop")
#     word = input()
#     if word == "diadema":
#         break
# print("You've successfully left the loop.")

#############################################################################################

# user_word = input("Type any word ").upper()
# for letter in user_word:
#     if letter == 'A':
#         continue
#     elif letter == 'I':
#         continue
#     elif letter == 'U':
#         continue
#     elif letter == 'E':
#         continue
#     elif letter == 'O':
#         continue
#     else:
#         print(letter)

##############################################################################################

#print("Type any word")
#word = input().upper()
#word_without_vowels = ""
#for letter in word:
#    if letter == 'A':
#        continue
#    elif letter == 'E':
#        continue
#    elif letter == 'I':
#        continue
#    elif letter == 'O':
#        continue
#    elif letter == 'U':
#        continue
#    else:
#        word_without_vowels += letter
#print(word_without_vowels)

#############################################################################################

# blocks = int(input("Enter the number of blocks: "))
# counter = 1
# height = 0
# while blocks != 0:
#     blocks -= counter
#     if blocks < 0:
#         break
#     height += 1
#     counter += 1

# print("The height of the pyramid:", height)

#############################################################################################

# c0 = int(input("Type any number, non negative and not null "))
# counter = 0
# while c0 != 1:
#     if c0 % 2 == 0:
#         c0 //= 2
#     else:
#         c0 = 3 * c0 + 1
#     print(c0)
#     counter += 1
# print("Steps:",counter)

#############################################################################################

# for i in range(1,11):
#     if i % 2 != 0:
#         print(i)

# i = 1
# while i < 11:
#     if i % 2 != 0:
#         print(i)
#     i+=1

# email = input("Type a valid email address ")
# before_at = ""
# for letter in email:
#     if letter != "@":
#         before_at += letter
#     else:
#         break
# print(before_at)

# num = input("Type a number with some 0 inside it ")
# num_x = ""
# for n in num:
#     if n == "0":
#         num_x += "x"
#         continue
#     else:
#         num_x += n
# print(num_x)

#############################################################################################

# hat_list = [1,2,3,4,5]
# hat_list[2] = int(input("Type a random number to replace the middle number of the list"))
# del(hat_list[4])
# print(len(hat_list),hat_list)

# my_list = [10,1,8,3,5]
# total = 0
# for n in my_list:
#     total += n
# print(total)

#############################################################################################

# beatles = []
# beatles.append("John Lennon")
# beatles.append("Paul McCartney")
# beatles.append("George Harrison")
# print(beatles)
# beatles.append(input("Type the name of the remaining 2 members "))
# beatles.append(input())
# print(beatles)
# del(beatles[3])
# del(beatles[3])
# print(beatles)
# beatles.insert(0,"Ringo Starr")
# print(beatles)

#############################################################################################

# my_list = [8, 10, 6, 2, 4]  # list to sort
# swapped = True  # It's a little fake, we need it to enter the while loop.

# while swapped:
#     swapped = False  # no swaps so far
#     for i in range(len(my_list) - 1):
#         if my_list[i] > my_list[i + 1]:
#             swapped = True  # a swap occurred!
#             my_list[i], my_list[i + 1] = my_list[i + 1], my_list[i]
#             print(i)
#             print(my_list)
# print(my_list)

#############################################################################################

# lst_1 = [1,2,3,4]
# lst_2 = lst_1[:] # Copy all the elements and not duplicate de pointer
# del(lst_2[0:5])
# print(lst_2)
# print(lst_1[1:-1])

#############################################################################################

# my_list = []
# new_list = []
# print("This program lets you type 10 numbers and only show the ones that are not repeated")
# for i in range(10):
#     my_list.append(int(input("Type " + str(10 - i) + " more numbers: ")))

# for i in range(len(my_list)):
#     if my_list[i] not in new_list:
#         new_list.append(my_list[i])
# print("The list with unique elements only:")
# print(new_list)


#############################################################################################

# temps = [[0.0 for h in range(24)] for d in range(31)]
# for i in range(31):
#     print(temps[i])

# # Suppose that there are 3 buildings with 15 floors each, and each floor contains 20 rooms
# rooms = [[[False for r in range(20)] for f in range(15)] for b in range(3)]
# # To mark that there is someone in the second building, 10th floor, at the 14th room:
# rooms[1][9][13] = True

# # To check how many vacant rooms we have in the building 3, 15th floor:
# vacancy = 0
# for room_number in range(20):
#     if rooms[2][14][room_number] = False:
#         vacancy =+ 1

# # This
# [expression for element in list if conditional]
# # Is the same as this
# for element in list:
#     if conditional:
#         expression

# Example:
# cubed = [num ** 3 for num in range(5)]
# print(cubed)  # outputs: [0, 1, 8, 27, 64]


#############################################################################################
###### CHAPTER 4 ######

# def introduction(first_name, last_name="Smith"):
#     print("Hello, my name is", first_name, last_name)

# introduction("Will")

#############################################################################################

# def do_this():
#     print("This")

# x = do_this()
# if x is None:
#     print("None")
# else:
#     print("IDK")

#############################################################################################

# lst_num = [1,2,3,4,5]

# def sum_lst(lst):
#     sum = 0
#     for i in lst:
#         sum += i
#     return sum

# summed_lst_num = sum_lst(lst_num)
# print(summed_lst_num)

#############################################################################################
#############################################################################################
#############################################################################################
#############################################################################################
#############################################################################################
