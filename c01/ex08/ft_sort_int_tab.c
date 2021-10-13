#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	indice_min;
	int	temp;

	i = 0; 
	indice_min = 0;
	while (i < size - 1) 
	{
		indice_min = j;
		j = i + 1;
		while (j < size)
		{
			if (*(tab + j) > *(tab + indice_min))
			{
				indice_min = j;
			}
			j++;
			temp = *(tab + i);
			*(tab + i) = *(tab + indice_min);
			*(tab + indice_min) = temp;
		}
		i++;
	}
}

int	main(void)
{
	int array[] = {5, 7, 9, 0, 1, 3};
	ft_sort_int_tab(array, 6);
}
