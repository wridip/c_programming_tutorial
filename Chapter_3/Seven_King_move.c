/* King move

# Chess king moves horizontally, vertically or diagonally to any adjacent cell. Given two different cells of the chessboard, determine whether a king can go from the first cell to the second in one move.

# The program receives the input of four numbers from 1 to 8, each specifying the column and row number, first two - for the first cell, and then the last two - for the second cell. The program should output YES if a king can go from the first cell to the second in one move, or NO otherwise. 

# Test:
# 4
# 4
# 5
# 5		YES

# 4
# 4
# 5
# 4		YES

# 4
# 4
# 5
# 3		YES

# 4
# 4
# 4
# 5		YES

# 4
# 4
# 3
# 5		YES

# 4
# 4
# 4
# 3		YES

# 4
# 4
# 3
# 4		YES

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
# 8		NO

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
# 1		NO

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
# 1		NO

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
# 8		NO

# 8
# 1
# 8
# 8		NO

# 1
# 1
# 1
# 2		YES

# 1
# 1
# 2
# 2		YES

# 1
# 1
# 2
# 1		YES

# 4
# 4
# 6
# 6		NO

# 4
# 4
# 2
# 2		NO

# 4
# 4
# 6
# 2		NO

# 4
# 4
# 2
# 6		NO

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

# 4
# 4
# 5
# 6		NO

# 1
# 7
# 1
# 8		YES

# 4
# 3
# 2
# 2		NO
*/

#include<stdio.h>
void main ()
{
	int current_row,current_column,destination_row,destination_column;
	printf("current row move: ");
	scanf("%d",&current_row);
	printf("current column move: ");
	scanf("%d",&current_column);
	printf("destination row move: ");
	scanf("%d",&destination_row);
	printf("destination column move: ");
	scanf("%d",&destination_column);
	if (current_row == destination_row + 1 || current_row == destination_row - 1 || current_row == destination_row)
	{
		printf("Yes\n");
	}
	else if (current_column == destination_column +1 || current_column == destination_column -1 || current_column == destination_column)
	{
		printf("Yes\n");
	}
	else 
	{
		printf("No\n");
	}	

}
