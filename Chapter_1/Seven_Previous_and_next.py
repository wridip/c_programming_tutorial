# Previous and next
# Write a program that reads an integer number and prints its previous and next numbers. See the examples below for the exact format your answers should take. There shouldn't be a space before the period.

# Remember that you can convert the numbers to strings using the function str. 

# Test:

# 179
# The next number for the number 179 is 180.
# The previous number for the number 179 is 178.

# 0
# The next number for the number 0 is 1.
# The previous number for the number 0 is -1.

# 2718281828904590
# The next number for the number 2718281828904590 is 2718281828904591.
# The previous number for the number 2718281828904590 is 2718281828904589.


num = int(input("enter the integer number :"))
print('the next number for the number ' +str(num) +' is ' + str(num + 1)+'.')
print('the previous number for the number ' +str(num) +' is ' + str(num - 1)+'.')
