# Two timestamps
# A timestamp is three numbers: a number of hours, minutes and seconds. Given two timestamps, calculate how many seconds is between them. The moment of the first timestamp occurred before the moment of the second timestamp. 


# Test:
# 1
# 1
# 1
# 2
# 2
# 2		3661

# 6
# 1
# 30
# 6
# 2
# 10		40

# 10
# 8
# 2
# 10
# 8
# 2		0

# 2
# 3
# 4
# 4
# 7
# 28		7464

# 5
# 50
# 48
# 10
# 20
# 35		16187

# 1
# 15
# 39
# 6
# 15
# 39	18000

# 11
# 7
# 29
# 11
# 30
# 29		1380

# 5
# 34
# 4
# 5
# 34
# 50		46

# 4
# 19
# 21
# 7
# 39
# 45		12024

hours_1 = int(input("enter the number of hours of the first timestamp :"))
minutes_1 = int(input("enter the number of minutes of the first timestamp :"))
seconds_1 = int(input("enter the number of seconds of the first timestamp :"))
hours_2 = int(input("enter the number of hours of the second timestamp :"))
minutes_2 = int(input("enter the number of minutes of the second timestamp :"))
seconds_2 = int(input("enter the number of seconds of the second timestamp :"))
print(hours_2 * 3600 + minutes_2 * 60 + seconds_2 - hours_1 * 3600 - minutes_1 * 60 - seconds_1)


