/* Total cost
 *
# A cupcake costs A dollars and B cents. Determine, how many dollars and cents should one pay for N cupcakes. A program gets three numbers: A, B, N. It should print two numbers: total cost in dollars and cents. 
# Test:
# 2
# 50
# 4		10 0

# 10
# 15
# 2		20 30

# 3000
# 99
# 3000		9002970 0

# 2029
# 34
# 1848		3750220 32

# 1886
# 73
# 295		556585 35

# 1069
# 40
# 1967		2103509 80

# 905
# 79
# 496		449271 84

# 1967
# 91
# 926		1822284 66

# 2255
# 76
# 1090		2458778 40

# 2435
# 6
# 1965		4784892 90
*/

#include <stdio.h>
void main()
{
	int A,B,N,cents,totalDollars,totalCents;
	printf("Insert Dollars :");
	scanf("%d",&A);
	printf("Insert Cents :");
	scanf("%d",&B);
	printf("Insert cupcake :");
	scanf("%d",&N);
	totalDollars =(((A * 100) + B)*N)/100;
	totalCents =(((A * 100) + B)*N)%100;
	printf("total dollar = %d \n total cents = %d \n",totalDollars,totalCents);
	



	
}
