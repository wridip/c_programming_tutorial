# Apple sharing
# N students take K apples and distribute them among each other evenly. The remaining (the undivisible) part remains in the basket. How many apples will each single student get? How many apples will remain in the basket?

# The program reads the numbers N and K. It should print the two answers for the questions above. 

# Test:

# 6
# 50		8 2

# 1
# 10		10 0

# 5
# 25		5 0

# 4
# 2		0  2

n = int(input("enter the number of students :"))
k = int(input("enter the number of apples :"))
print(k // n)
print(k % n)
        
