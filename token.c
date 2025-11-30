#include "header.h"

void	token(char **matrix, int col, int row, char player)
{
	int	i;

	i = row - 1;
	while (i >= 0)
	{
		if (matrix[i][col - 1] == '.')
		{
			matrix[i][col - 1] = player;
			return ;
		}
		i--;
	}
	ft_putstr("Colonne pleine, choisissez une autre colonne.\n");
}
