/* Car route
# A car can cover distance of N kilometers per day. How many days will it take to cover a route of length M kilometers? The program gets two numbers: N and M. 
# Test:

# 700
# 750		2

# 700
# 2100		3

# 10
# 15		2

# 10
# 16		2

# 10
# 19		2

# 10
# 70		7

# 10
# 81		9

# 10
# 1000		100

# 10
# 1001		101

# 10
# 999		100

# 10
# 1		1

# 10
# 9		1

# 483
# 9382		20

# 123
# 234234		1905
*/

#include <stdio.h>
void main()
{
	int N,M,No_of_days;
	printf("enter the distance cover per day :");
	scanf("%d",&N);
	printf("enter the distance needs to be covered by the car :");
	scanf("%d",&M);
	No_of_days = M / N;
	printf("the number of days it takes to cover the distance : %d",No_of_days);
}
