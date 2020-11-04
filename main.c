#include <stdio.h>
int ft_ten_queens_puzzle(void);
int main()
{
	int x;
	printf("\n\nQueens Puzzle\n\n");
	x = ft_ten_queens_puzzle();
	printf("    function returns: %d", x);
	return (0);
}
