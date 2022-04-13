/* Equal numbers

# Given three integers, determine how many of them are equal to each other. The program must print one of these numbers: 3 (if all are the same), 2 (if two of them are equal to each other and the third is different) or 0 (if all numbers are different)
# Test:
# 10
# 5
# 10		2

# 17
# 17
# -9		2

# 4
# -82
# -82		2

# 5
# 2
# 4		0

# -149
# -146
# -142		0

# 666
# 666
# 666		3
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
	if (num1==num2&&num2==num3)
	{
		printf("3 \n");
	}
	else if (num2==num1)
	{
		printf("2 \n");
	}
	else if (num1==num3)
	{
		printf("2 \n");
	}
	else if (num1==num2&&num2==num3)
	{
		printf("3 \n");
	}
	else
	{
		printf("0 \n");
	}



}
