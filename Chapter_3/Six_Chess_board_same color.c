/* Chessboard - same color

# Given two cells of a chessboard. If they are painted in one color, print the word YES, and if in a different color - NO.

# The program receives the input of four numbers from 1 to 8, each specifying the column and row number, first two - for the first cell, and then the last two - for the second cell. 

# Test:
# 1
# 1
# 2
# 6		YES

# 2
# 2
# 2
# 5		NO

# 2
# 2
# 2
# 4		YES

# 2
# 3
# 3
# 2		YES

# 2
# 3
# 7
# 8		YES

# 2
# 3
# 8
# 8		NO

# 5
# 7
# 5
# 7		YES

# 2
# 6
# 3
# 1		YES

# 2
# 3
# 4
# 5		YES

# 7
# 2
# 2
# 3		YES

# 1
# 6
# 7
# 2		YES
*/

#include<stdio.h>
void main()
{
	int h1,w1,h2,w2;
	printf("first cell height:");
	scanf("%d",&h1);
	printf("first cell width:");
	scanf("%d",&w1);
	printf("second cell height:");
	scanf("%d",&h2);
	printf("second cell width:");
	scanf("%d",&w2);
	if ((h1+w1) % 2 == (h2+w2) % 2)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}

}
