#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void	ft_putstr(char *str);
void	ft_putchar(char c);
void	ft_putnbr(int nb);
char	**init_grid(int row, int col);
void	display_grid(int row, int col, char **matrix);
void	token(char **matrix, int col, int row, char player);
void	free_matrix(char **matrix, int row);
int		veriff_grid(char **matrix, int row, int col);
