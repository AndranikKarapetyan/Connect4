#include "header.h"

char	**init_grid(int row, int col)
{
	int		i;
	int		n;
	char	**matrix;

	i = 0;
	matrix = malloc(row * sizeof(char *));
	if (!matrix)
		return (NULL);
	while (i < row)
	{
		matrix[i] = malloc((row * col) * sizeof(char));
		if (!matrix)
			return (NULL);
		n = 0;
		while (n < col)
		{
			matrix[i][n] = '.';
			n++;
		}
		i++;
	}
	return (matrix);
}

void	display_grid(int row, int col, char **matrix)
{
	int	i;
	int	n;

	n = 0;
	while (n < col)
	{
		ft_putnbr(n + 1);
		if (n < col - 1)
			write(1, "  ", 2);
		n++;
	}
	write(1, "\n", 1);
	i = 0;
	while (i < row)
	{
		n = 0;
		while (n < col)
		{
			ft_putchar(matrix[i][n]);
			if (n < (col - 1))
				write(1, "  ", 2);
			n++;
		}
		write(1, "\n", 1);
		i++;
	}
}

void	free_matrix(char **matrix, int row)
{
	int	i;

	i = 0;
	while (i < row)
	{
		free(matrix[i]);
		i++;
	}
	free(matrix);
}
