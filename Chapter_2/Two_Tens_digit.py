# Tens digit
# Given an integer. Print its tens digit. 
# Test:
# 73		7

# 1234		3

# 10		1

# 29		2

# 37		3

# 48		4

# 50		5

# 67		6

# 81		8

# 99		9

# 179		7

# 100		0

# 999		9

# 854345		4

# 1000000		0

# 9999		9

# 9		0

# 1		0

# 0		0

tens_digit = int(input("enter the number :"))
print(tens_digit // 10 % 10)
