/* Apple sharing
# N students take K apples and distribute them among each other evenly. The remaining (the undivisible) part remains in the basket. How many apples will each single student get? How many apples will remain in the basket?

# The program reads the numbers N and K. It should print the two answers for the questions above. 

# Test:

# 6
# 50		8 2

# 1
# 10		10 0

# 5
# 25		5 0

# 4
# 2		0  2
*/

#include<stdio.h>
int main()
{
	int N_students,K_apples,div,mod;       
	printf("enter N students");
	scanf("%d",&N_students);
	printf("enter K apples");
	scanf("%d",&K_apples);
	div=K_apples/N_students;
	mod=K_apples%N_students;
	printf("how many apples each students would get:%d",div);
	printf("how many apples remains in the basket:%d",mod);



	
}
