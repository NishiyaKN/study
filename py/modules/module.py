#!/usr/bin/env python3
__counter = 0

def suml(the_list):
    global __counter
    __counter += 1
    the_sum = 0
    for element in the_list:
        the_sum += element
    return the_sum

def prodl(the_list):
    global __counter
    __counter += 1
    prod = 1
    for element in the_list:
        prod *= element
    return prod

if __name__ == "__main__":
    print("I prefer to be a module, but I can do some test for you.")
    my_list = [i+1 for i in range(5)]
    print(my_list)
    print(suml(my_list) == 15)
    print(prodl(my_list) == 120)
