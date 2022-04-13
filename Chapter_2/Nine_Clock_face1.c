/* Clock face - 1
# H hours, M minutes and S seconds are passed since the midnight (0 ≤ H < 12, 0 ≤ M < 60, 0 ≤ S < 60). Determine the angle (in degrees) of the hour hand on the clock face right now. 

# Test:
# 1
# 2
# 6		31.05

# 1
# 0
# 0		30

# 0
# 1
# 0		0.5

# 0
# 2
# 0		1

# 0
# 2
# 1		1.00833

# 0
# 0
# 1		0.00833333

# 11
# 59
# 59		359.992

# 7
# 18
# 49		219.408

# 4
# 54
# 55		147.458

# 9
# 9
# 37		274.808
*/

#include <stdio.h>
void main()
{
	double H,M,S,Angle;
	printf("enter the hours :");
	scanf("%lf",&H);
	printf("enter the minutes :");
	scanf("%lf",&M);
	printf("enter the seconds :");
	scanf("%lf",&S);
	Angle = ((H * 30) + (M * 0.5) + (S * (0.5/60)));
	printf("Angle is :%lf",Angle);


}
