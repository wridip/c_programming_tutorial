/* Fractional part
# Given a positive real number, print its fractional part. 
# Test:
# 17.9		0.9

# 10.34		0.34

# 0.001		0.001

# 179		0

19.99		0.99
*/


#include<stdio.h>
int main()
{
	float number;
	int real;
	printf("enter the positive real number:");
	scanf("%f",&number);
	real = number;
	printf("fraction part =%f",number - real);
}
