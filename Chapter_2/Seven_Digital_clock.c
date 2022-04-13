/* Digital clock
# Given the integer N - the number of minutes that is passed since midnight - how many hours and minutes are displayed on the 24h digital clock?

# The program should print two numbers: the number of hours (between 0 and 23) and the number of minutes (between 0 and 59).

# For example, if N = 150, then 150 minutes have passed since midnight - i.e. now is 2:30 am. So the program should print 2 30. 

# Test:
# 150		2 30

# 180		3 0

# 444		7 24

# 1111		18 31

# 1439		23 59
*/

#include <stdio.h>
void main()
{
	int num,hr,min;
	printf("the number of minutes passed since midnight :");
	scanf("%d",&num);
	hr = num / 60;
	min = num % 60 ;
	printf("now is :%d %d",hr,min);

}
