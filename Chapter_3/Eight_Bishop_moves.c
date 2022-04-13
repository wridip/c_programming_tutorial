/* Bishop moves

# In chess, the bishop moves diagonally, any number of squares. Given two different squares of the chessboard, determine whether a bishop can go from the first to the second in one move.

# The program receives as input four numbers from 1 to 8, specifying the column and row numbers of the starting square and the column and row numbers of the ending square. The program should output YES if a Bishop can go from the first square to the second in one move, or NO otherwise. (Noukar chal)

# Test:
# 4
# 4
# 5
# 5		YES

# 4
# 4
# 5
# 4		NO

# 4
# 4
# 5
# 3		YES

# 4
# 4
# 4
# 5		NO

# 4
# 4
# 3
# 5		YES

# 4
# 4
# 4
# 3		NO

# 4
# 4
# 3
# 4		NO

# 4
# 4
# 3
# 3		YES

# 1
# 1
# 1
# 8		NO

# 1
# 1
# 8
# 8		YES

# 1
# 1
# 8
# 1		NO

# 1
# 8
# 8
# 8		NO

# 1
# 8
# 8
# 1		YES

# 1
# 8
# 1
# 1		NO

# 8
# 8
# 8
# 1		NO

# 8
# 8
# 1
# 1		YES

# 8
# 8
# 1
# 8		NO

# 8
# 1
# 1
# 1		NO

# 8
# 1
# 1
# 8		YES

# 8
# 1
# 8
# 8		NO

# 1
# 1
# 1
# 2		NO

# 1
# 1
# 2
# 2		YES

# 1
# 1
# 2
# 1		NO

# 4
# 4
# 6
# 6		YES

# 4
# 4
# 2
# 2		YES

# 4
# 4
# 6
# 2		YES

# 4
# 4
# 2
# 6		YES

# 4
# 4
# 2
# 7		NO

# 4
# 4
# 4
# 6		NO

# 4
# 4
# 2
# 4		NO

# 7
# 4
# 2
# 5		NO

# 7
# 5
# 1
# 1		NO 
*/

#include<stdio.h>
void main()
{
	int current_row,destination_row,current_column,destination_column;
	printf("enter current row");
	scanf("%d",&current_row);
	printf("enter current column");
	scanf("%d",&current_column);
	printf("enter destination row");
	scanf("%d",&destination_row);
	printf("enter destination column");
	scanf("%d",&destination_column);
	if ((current_row - destination_row) == (current_column - destination_column))
	{
		printf("Yes");
	}
	else
	{
		printf("No");
	}



}
