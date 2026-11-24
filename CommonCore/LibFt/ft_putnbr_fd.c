/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarine <delrieux.carine@learner.42.tech>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/24 16:00:52 by dcarine           #+#    #+#             */
/*   Updated: 2026/11/24 16:58:23 by dcarine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	nbr;
	char	c;

	nbr = n;
	if (fd < 0)
		return ;
	if (nbr < 0)
	{
		nbr = -nbr;
		write(fd, "-", 1);
	}
	if (nbr >= 10)
		ft_putnbr_fd(nbr / 10, fd);
	nbr = nbr % 10;
	c = nbr + '0';
	write(fd, &c, 1);
}
/*
int	main(void)
{
	int	fd;

	fd = open("test3.txt", O_CREAT | O_RDWR | O_APPEND, 0644);
	ft_putnbr_fd(458945, fd);
	close(fd);
	return (0);
}*/