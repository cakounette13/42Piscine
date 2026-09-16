#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

int	main(void)
{
	int	nb1;
	int	nb2;

	nb1 = 14;
	nb2 = 6;
	ft_swap(&nb1, &nb2);
	printf("%d, %d", nb1, nb2);
}