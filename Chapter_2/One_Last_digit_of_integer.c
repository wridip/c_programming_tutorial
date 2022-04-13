/* Last digit of integer
# Given an integer number, print its last digit. 


def last_digit(number)
	return number % 10 
end
# Test:
# 179		9

# 40		0

# 101		1

# 222		2

# 1923		3

# 74		4

# 505		5

# 996		6

# 3487		7

# 308		8

# 1		1

# 2		2

# 3		3

# 4		4

# 5		5

# 6		6

# 7		7

# 9		9

# 10		0
*/

#include<stdio.h>
int main()
{	
	int number, lastdigit;
	printf("enter the number:");
	scanf("%d",&number);
	lastdigit = number % 10;
	while (number >=10)
	{
		number = number/10;
	}
	printf("last digit =%d",lastdigit);

}
