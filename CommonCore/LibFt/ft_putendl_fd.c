/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarine <delrieux.carine@learner.42.tech>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/24 15:47:24 by dcarine           #+#    #+#             */
/*   Updated: 2026/11/24 15:54:40 by dcarine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	len_s;

	if (!s || fd == -1)
		return ;
	len_s = ft_strlen(s);
	write(fd, s, len_s);
	write(fd, "\n", 1);
}
/*
int	main(void)
{
	int	fd;

	fd = open("text2.txt", O_CREAT | O_RDWR, 0644);
	ft_putendl_fd("Barbapapa", fd);
	close(fd);
	return (0);
}*/