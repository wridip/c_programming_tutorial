/* Hi John
# Write a program that greets the person by printing the word "Hi" and the name of the person. See the examples below. 

# Test :

# John		Hi John

# Alice		Hi Alice

# Bob		Hi Bob

# Tanner		Hi Tanner

# Jake		Hi Jake
*/

#include<stdio.h>
int main()
{
	char name[10];
	printf("enter your name: ");
	scanf("%s",&name);
	printf("Hi %s!",name);
}
