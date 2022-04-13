/* Minimum of two numbers
# Given two integers, print the smaller value. 
# Test:
# 3
# 7		3

# 2
# 2		2

# 15
# -8		-8

# -15
# -8		-15
*/

#include<stdio.h>
void main()
{
	int a,b;
	printf("enter the first number :");
	scanf("%d",&a);
	printf("enter the second number :");
	scanf("%d",&b);
	if (a<b)
	{
		printf("The smaller value is %d \n",a);
	}
	else
	{
		printf("The smaller value is %d \n",b);
	}



				
}
