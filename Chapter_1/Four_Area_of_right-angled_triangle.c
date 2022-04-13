/* Area of right-angled triangle»
# Write a program that reads the length of the base and the height of a right-angled triangle and prints the area. Every number is given on a separate line. 


# Test:
# 3
# 5		7.5

# 10
# 2		10.0

# 179
# 1534		137293.0

# 1543
# 57		43975.5
*/

#include<stdio.h>
int main ()
{
	float base,perpendicular,area;
	printf("enter base of right angled triangle");
	scanf("%f",&base);
	printf("enter perpendicular of right angled triangle");
	scanf("%f",&perpendicular);
	area=(base * perpendicular)/2;
	printf("area of triangle %.2f :",area);


}
