/* First digit after decimal point
# Given a positive real number, print its first digit to the right of the decimal point. 
# Test:
# 1.79		7

# 10.34		3

# 0.001		0

# 179		0

# 19.99		9

# 179.12		1

# 5.29		2

# 0.31		3

# 12.45		4

# 18.58		5

# 0.83		8

# 999.99		9

# 146.67		6

# 1293.73		7

# 0.09999		0

# 312.19999		1

# 901.29999		2

# 3.39999		3

# 2371.49999		4

# 290.59999		5

# 90291.69999		6

# 412.79999		7

# 1.89999		8

# 0.999999		9
*/


#include <stdio.h>
void main()
{
	float number;
	int rd;
	printf("enter the number:");
	scanf("%f",&number);
	rd = number * 10;
	printf("right decimal =%d",rd % 10 );
	

			
}

