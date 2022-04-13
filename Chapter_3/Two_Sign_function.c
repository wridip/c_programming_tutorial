/* Sign function

# For the given integer X print 1 if it's positive, -1 if it's negative, or 0 if it's equal to zero.

# Try to use the cascade if-elif-else for it. 

# Test:

# 179		1

# -42		-1

# 0		0

# 17		1

# -100		-1
*/


#include<stdio.h>
void main()
{
	int X;
	printf("Enter the integer: ");
	scanf("%d",&X);
	if (X>0)
	{
		printf("1 %d \n",X);
	}
	else if (X<0)
	{
		printf("-1 %d \n",X);
	}
	else
	{
		printf("0 %d \n",X);
	}
}
