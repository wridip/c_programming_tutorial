/* Hello, Harry!
# Write a program that greets the user by printing the word "Hello", a comma, the name of the user and an exclamation mark after it. See the examples below.

# Warning. Your program's output should strictly match the desired one, character by character. There shouldn't be any space between the name and the exclamation mark. You can use + operator to concatenate two strings. See the lesson for details. 

# Test:

# Harry		Hello, Harry!

# Mr. Potter		Hello, Mr. Potter!

# Lord Voldemort		Hello, Lord Voldemort!
*/


#include <stdio.h>
int main()
{
	char name[10];
	printf("enter your name:");
	scanf("%s",name);
	printf("Hello, %s!",name);

	

}

