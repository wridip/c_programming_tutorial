/* Minimum of three numbers
# Given three integers, print the smallest value. 
# Test:
# 5
# 3
# 7		3

# 10
# 30
# 4		4

# -5
# -3
# -3		-5

# 1
# 10
# 20		1

# 74
# 32
# 11		11

# 50
# 80
# 25		25
*/


#include<stdio.h>
void main()
{
	int num1,num2,num3;
	printf("enter the first number :");
	scanf("%d",&num1);
	printf("enter the second number :");
	scanf("%d",&num2);
	printf("enter the third number :");
	scanf("%d",&num3);
	if (num1<num2&&num1<num3)
	{
		printf("the smallest number is :%d \n",num1);
	}
	else if (num2<num1&&num2<num3)
	{
		printf("the smallest number is :%d \n",num2);
	}
	else
	{
		printf("the smallest number is :%d \n",num3);
	}

}
