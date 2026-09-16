#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_condition_n(int n)
{
	if (n >= 10)
	{
		ft_putchar(n / 10 + 48);
		ft_putchar(n % 10 + 48);
	}
}

void	ft_inf_neuf(int n)
{
	if (n <= 9)
	{
		ft_putchar('0');
		ft_putchar(n + 48);
	}
}

void	ft_print_comb2(void)
{
	int	n1;
	int	n2;

	n1 = 0;
	while (n1 <= 98)
	{
		n2 = n1 + 1;
		while (n2 <= 99)
		{
			ft_inf_neuf(n1);
			ft_condition_n(n1);
			ft_putchar(' ');
			ft_inf_neuf(n2);
			ft_condition_n(n2);
			if (n1 != 98)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			n2++;
		}
		n1++;
	}
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}