/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarine <delrieux.carine@learner.42.tech>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/24 13:03:52 by dcarine           #+#    #+#             */
/*   Updated: 2026/11/24 15:33:24 by dcarine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	size_t	len_str;

	if (fd < 0 || s == NULL)
		return ;
	len_str = ft_strlen(s);
	write(fd, s, len_str);
}
/*
int	main(void)
{
	int	fd;

	fd = open("text2.txt", O_CREAT | O_RDWR, 0644);
	ft_putstr_fd("Barbapapa", fd);
	close(fd);
	return (0);
}*/