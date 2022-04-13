/* Previous and next
# Write a program that reads an integer number and prints its previous and next numbers. See the examples below for the exact format your answers should take. There shouldn't be a space before the period.

# Remember that you can convert the numbers to strings using the function str. 

# Test:

# 179
# The next number for the number 179 is 180.
# The previous number for the number 179 is 178.

# 0
# The next number for the number 0 is 1.
# The previous number for the number 0 is -1.

# 2718281828904590
# The next number for the number 2718281828904590 is 2718281828904591.
# The previous number for the number 2718281828904590 is 2718281828904589.
*/

#include<stdio.h>
int main()
{
	long double number,next_number,previous_number;
	printf("Enter the number:");
	scanf("%Lf",&number);
	next_number=number + 1;
	previous_number=number - 1;
	printf("The next number for the number%Lf and previous number is %Lf \n",next_number,previous_number);
	

}
