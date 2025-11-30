#include "header.h"

int	main(int argc, char **argv)
{
	char	**matrix;
	char	token1;
	char	token2;
	int		row;
	int		col;
	int		x;
	int		y;
	int		i;

	token1 = 'x';
	token2 = 'o';
	row = atoi(argv[1]);
	col = atoi(argv[2]);
	i = 0;
	matrix = init_grid(row, col);
	display_grid(row, col, matrix);
	if (argc == 3)
	{
		while (i < row * col)
		{
			ft_putstr("Joeur 1, entrez votre numéro : ");
			scanf("%d", &x);
			token(matrix, x, row, token1);
			display_grid(row, col, matrix);
			if (veriff_grid(matrix, row, col) == 1)
			{
				ft_putstr("Joeur 1 a gagner !\n");
				return (1);
			}
			i++;
			if (i == row * col)
			{
				ft_putstr("Match Nul !\n");
				return (0);
			}
			ft_putstr("Joeur 2, entrez votre numéro : ");
			scanf("%d", &y);
			token(matrix, y, row, token2);
			display_grid(row, col, matrix);
			if (veriff_grid(matrix, row, col) == 2)
			{
				ft_putstr("Joeur 2 a gagner !\n");
				return (2);
			}
			i++;
		}
		ft_putstr("Match Nul !\n");
	}
	free_matrix(matrix, row);
	return (0);
}
