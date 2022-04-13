/* Clock face - 2
# Hour hand turned by α degrees since the midnight. Determine the angle by which minute hand turned since the start of the current hour. Input and output in this problems are floating-point numbers. 
# Test:
# 190		120

# 0		0

# 5		60

# 10		120

# 15		180

# 20		240

# 25		300

# 29		348

# 30		0

# 31		12

# 40		120

# 59		348

# 60		0

# 61		12

# 70		120

# 89		348

# 90		0

# 95		60

# 179		348

# 190		120

# 192		144

# 300		0

# 359		348

# 1		12

# 132		144

# 0.5		6

# 0.0001		0.0012

# 73.2938		159.526

# 119.994		359.928

# 120.005		0.06

# 231.3452		256.142
*/

#include<stdio.h>
#include<math.h>
int main()
{
	int min,n;
	printf("minute hand turns :");
	scanf("%d",&min);
	n = (min % 30)*12;
	printf("%d",n);

}
