/* Two timestamps
# A timestamp is three numbers: a number of hours, minutes and seconds. Given two timestamps, calculate how many seconds is between them. The moment of the first timestamp occurred before the moment of the second timestamp. 


# Test:
# 1
# 1
# 1
# 2
# 2
# 2		3661

# 6
# 1
# 30
# 6
# 2
# 10		40

# 10
# 8
# 2
# 10
# 8
# 2		0

# 2
# 3
# 4
# 4
# 7
# 28		7464

# 5
# 50
# 48
# 10
# 20
# 35		16187

# 1
# 15
# 39
# 6
# 15
# 39	18000

# 11
# 7
# 29
# 11
# 30
# 29		1380

# 5
# 34
# 4
# 5
# 34
# 50		46

# 4
# 19
# 21
# 7
# 39
# 45		12024
*/

#include <stdio.h>   
int main()
{
	int first_timestamp_hours,first_timestamp_minutes,first_timestamp_seconds,second_timestamp_hours,second_timestamp_minutes,second_timestamp_seconds,first_timestamp_total,second_timestamp_total;
	printf("enter the number of hours in the first time stamp :");
	scanf("%d",&first_timestamp_hours);
	printf("enter the number of minutes in the first time stamp :");
	scanf("%d",&first_timestamp_minutes);
	printf("enter the number of seconds in the first time stamp :");
	scanf("%d",&first_timestamp_seconds);
	printf("enter the number of hours in the second time stamp :");
	scanf("%d",&second_timestamp_hours);
	printf("enter the number of minutes in the second time stamp :");
	scanf("%d",&second_timestamp_minutes);
	printf("enter the number of seconds in the second time stamp :");
	scanf("%d",&second_timestamp_seconds);
	first_timestamp_hours = first_timestamp_hours * 3600;
	first_timestamp_minutes=first_timestamp_minutes * 60;  
	second_timestamp_hours = second_timestamp_hours * 3600;
	second_timestamp_minutes = second_timestamp_minutes* 60;
	first_timestamp_total = first_timestamp_hours + first_timestamp_minutes + first_timestamp_seconds;
	printf("first timestamp total :%d\n",first_timestamp_total);
	second_timestamp_total = second_timestamp_hours + second_timestamp_minutes + second_timestamp_seconds;
	printf("second timestamp total :%d\n",second_timestamp_total);
	printf("The differnce between two timestamp is:%d\n",second_timestamp_total - first_timestamp_total);
}

