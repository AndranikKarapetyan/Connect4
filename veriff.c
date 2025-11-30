int	veriff_grid(char **matrix, int row, int col)
{
	int	i;
	int	n;

	i = 0;
	while (i < row)
	{
		n = 0;
		while (n <= col - 4)
		{
			if (matrix[i][n] != '.' && \
					matrix[i][n] == matrix[i][n + 1] && \
					matrix[i][n] == matrix[i][n + 2] && \
					matrix[i][n] == matrix[i][n + 3])
			{
				if (matrix[i][n] == 'x')
					return (1);
				else
					return (2);
			}
			n++;
		}
		i++;
	}
	i = 0;
	while (i <= row - 4)
	{
		n = 0;
		while (n < col)
		{
			if (matrix[i][n] != '.' && \
					matrix[i][n] == matrix[i + 1][n] && \
					matrix[i][n] == matrix[i + 2][n] && \
					matrix[i][n] == matrix[i + 3][n])
			{
				if (matrix[i][n] == 'x')
					return (1);
				else
					return (2);
			}
			n++;
		}
		i++;
	}
	i = 0;
	while (i <= row - 4)
	{
		n = 0;
		while (n <= col - 4)
		{
			if (matrix[i][n] != '.' && \
					matrix[i][n] == matrix[i + 1][n + 1] && \
					matrix[i][n] == matrix[i + 2][n + 2] && \
					matrix[i][n] == matrix[i + 3][n + 3])
			{
				if (matrix[i][n] == 'x')
					return (1);
				else
					return (2);
			}
			n++;
		}
		i++;
	}
	i = 3;
	while (i < row)
	{
		n = 0;
		while (n <= col - 4)
		{
			if (matrix[i][n] != '.' && \
					matrix[i][n] == matrix[i - 1][n + 1] && \
					matrix[i][n] == matrix[i - 2][n + 2] && \
					matrix[i][n] == matrix[i - 3][n + 3])
			{
				if (matrix[i][n] == 'x')
					return (1);
				else
					return (2);
			}
			n++;
		}
		i++;
	}
	return (0);
}
