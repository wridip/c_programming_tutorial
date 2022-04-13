/*# Knight move

# Chess knight moves like the letter L. It can move two cells horizontally and one cell vertically, or two cells vertically and one cells horizontally. Given two different cells of the chessboard, determine whether a knight can go from the first cell to the second in one move.

# The program receives the input of four numbers from 1 to 8, each specifying the column and row number, first two - for the first cell, and then the last two - for the second cell. The program should output YES if a knight can go from the first cell to the second in one move, or NO otherwise(Ghorar Chal)

# Test:
# 1
# 1
# 1
# 4		NO

# 1
# 1
# 8
# 8		NO

# 2
# 4
# 3
# 2		YES

# 5
# 2
# 4
# 4		YES

# 2
# 8
# 3
# 7		NO

# 2
# 8
# 3
# 5		NO

# 5
# 5
# 3
# 7		NO

# 2
# 4
# 2
# 5		NO

# 4
# 7
# 6
# 6		YES

# 4
# 5
# 2
# 4		YES

# 2
# 3
# 3
# 2		NO

# 5
# 1
# 4
# 3		YES

# 6
# 2
# 8
# 3		YES
*/

#include<stdio.h>
void main()
{
	int current_row,current_column,destination_row,destination_column;
	printf("enter current row :");
	scanf("%d",&current_row);
	printf("enter current column :");
	scanf("%d",&current_column);
	printf("enter destination row :");
	scanf("%d",&destination_row);
	printf("enter destination column :");
	scanf("%d",&destination_column);
	if ((current_column == destination_column + 1 || current_column == destination_column -1) && (current_row == destination_row + 2 || current_row == destination_row - 2))
	{
		printf("Yes");
	}
	else if ((current_row == destination_row + 1 || current_row == destination_row + 1) && (current_column == destination_column + 2 || current_column == destination_column - 2))
	{
		printf("Yes");
	}
	else 
	{
		printf("No");
	}	

}
