# This simple program has the objective of calculating if a year is a leap or common year
# The user is able to choose how many years he wants to input
# I tried to make it the most user error proof as I could, but as it's just a simple program
# I gave up and decided to just add some comments and resume my python studies

def is_year_leap(year):
    # Check each element in list_year and return True or False
    # It will then be put in the list_results for each corresponding position
    if year % 4 != 0:
        leap = False
    elif year % 100 != 0:
        leap = True
    elif year % 400 != 0:
        leap = False
    else:
        leap = True
    return leap

def ask_numbers(n):
    i = 0
    # It's on while loop so it will not let proceed if the user has typed a invalid year
    while i < n:
        year = int(input("\nType " + str( n - i ) + " more year(s) to know which is a leap one\n"))
        if year > 1582:
            list_years.append(year)
            i += 1
        else:
            print("\n*** Invalid year, type anything above 1582 ***\n")

    # It's on while loop so the user has to choose one of the options
    # Otherwise it will keep asking the user
    while True:
        print("\nIs this correct? (Y/N)")
        # Adds all the elements from the list_years to a single var
        text = ""
        for i in range(n):
            text += str(list_years[i]) + " "
        print(text)

        user_input = input()
        if user_input == "Y" or user_input == "y":
            return True
        elif user_input == "N" or user_input == "n":
            return False
        else:
            print("\n*** Invalid option ***\n")

def parse_result(n):
    # After having all the years, it will pass each one of them throught is_year_leap()
    # And add it's results (T or F) to the list_results
    for i in range(n):
        list_results.append(is_year_leap(list_years[i]))

    for i in range(n):
        if list_results[i] is False:
            print(str(list_years[i]) + " is a common year")
        else:
            print(str(list_years[i]) + " is a leap year")

# Start of the program
# It's in a while loop so that the user can correct his inputs infinitely
# Only ends when all is set and results are displayed
while True:
    number_years = int(input("How many years do you want to know whether it's a leap or normal year? "))
    list_years = []
    list_results = []

    # Confirmation var, only by existing it calls the ask_numbers()
    all_ok = ask_numbers(number_years)
    print()

    # Check whether the user confirmed the years he inputed or not
    if all_ok is True:
        parse_result(number_years)
        print("\nEnd of the program :)\n")
        break
    else:
        print("Let's try again\n")

