/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarine <delrieux.carine@learner.42.tech>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/24 11:57:13 by dcarine           #+#    #+#             */
/*   Updated: 2026/11/24 14:19:42 by dcarine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	if (fd == -1)
		return ;
	write(fd, &c, 1);
}
/*
int	main(void)
{
	int	fd;

	fd = open("text.txt", O_CREAT | O_RDWR);
	ft_putchar_fd("A", fd);
	close(fd);
	return (0);
}*/