/* Sum of digits
# Given a three-digit number. Find the sum of its digits. 

# Test:

# 179		17

# 829		19

# 204		6

# 100		1

# 999		27

# 483		15
*/


#include<stdio.h>
int main()
{
	int number,a,sum=0;
	printf("enter the three digit number:");
	scanf("%d",&number);
	while (number>0)
	{
		a=number%10;
		sum=sum+a;
		number=number/10;
	}
	printf("sum is: %d",sum);



					
}
