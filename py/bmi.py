# This simple program has the objective to calculate the BMI from the values inputed by the
# user and print their current condition based on the value obtained.
# The user will be asked wether the metric or imperial system will be used

def calculate(weight,height):
    global bmi
    if unit == "Metric":
        bmi = weight / height ** 2
        return round(bmi,2)
    else:
        bmi = 703 * weight / height ** 2
        return round(bmi,2)

def results():
    if bmi < 18.5:
        print("You are underweight")
    elif bmi >= 18.5 and bmi < 25:
        print("You are at a normal weight")
    elif bmi >= 25 and bmi < 29.9:
        print("You are overweight")
    elif bmi >= 30 and bmi < 34.9:
        print("You are class I obese")
    elif bmi >= 35 and bmi < 39.9:
        print("You are class II obese")
    else:
        print("You are call III obese")
    
bmi = 0

if int(input("Choose your unit system:\n1. Metric\n2. Imperial\n")) == 1:
    print()
    unit = "Metric"
    weight = float(input("Type your weight in kilograms "))
    height = float(input("Type your height in meters "))

else:
    print()
    unit = "Imperial"
    weight = float(input("Type your weight in pounds "))
    height_feet = float(input("Type your height in feet "))
    height_inch = float(input("Type your height in inches "))
    height = height_feet * 12 + height_inch

print()
print(calculate(weight,height))
results()

