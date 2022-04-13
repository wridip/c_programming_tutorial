/* Queen move

# Chess queen moves horizontally, vertically or diagonally to any number of cells. Given two different cells of the chessboard, determine whether a queen can go from the first cell to the second in one move.

# The program receives the input of four numbers from 1 to 8, each specifying the column and row number, first two - for the first cell, and then the last two - for the second cell. The program should output YES if a queen can go from the first cell to the second in one move, or NO otherwise. 
#(Montri r chal)
# Test:
# 1
# 1
# 2
# 2		YES

# 1
# 1
# 2
# 3		NO

# 5
# 6
# 3
# 3		NO

# 3
# 3
# 1
# 1		YES

# 6
# 5
# 2
# 5		YES

# 7
# 6
# 5
# 2		NO

# 2
# 7
# 6
# 7		YES

# 2
# 7
# 4
# 6		NO

# 7
# 4
# 2
# 5		NO

# 7
# 5
# 1
# 1		NO

# 2
# 4
# 5
# 7		YES

# 3
# 5
# 7
# 1		YES

# 5
# 2
# 5
# 8		YES

# 1
# 2
# 3
# 1		NO

# 2
# 1
# 1
# 3		NO
*/

#include<stdio.h>
void main()
{
	int current_row,current_column,destination_row,destination_column;
	printf("enter the current row:");
	scanf("%d",&current_row);
	printf("enter the current column:");
	scanf("%d",&current_column);
	printf("enter the destination row:");
	scanf("%d",&destination_row);
	printf("enter the destination column:");
	scanf("%d",&destination_column);
	if ((current_column - destination_column) == (current_row - destination_row))
	{
		printf("Yes\n");
	}
	else if (current_row == destination_row || current_column == destination_column)
	{
		printf("Yes\n");
	}
	else
	{
		printf("No\n");
	}	
}
