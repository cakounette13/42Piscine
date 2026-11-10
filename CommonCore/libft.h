/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Delrieux Carine <Delrieux Carine@student.42.fr>  #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-11-06 17:30:54 by Delrieux Carine   #+#    #+#             */
/*   Updated: 2026-11-06 17:30:54 by Delrieux Carine  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

#ifndef LIBFT_H
#define LIBFT_H

int ft_atoi(char *str);
void ft_bzero(void *s, size_t n);

int	ft_isalnum(char *str);
int ft_isalpha(char *str);
int	ft_isascii(char *str);
int	ft_isdigit(char *str);
int	ft_isprint(char *str);






char	*ft_strdup(char *src);


int	ft_strlen(char *str);



char	*ft_tolower(char *str);
char	*ft_toupper(char *str);

#endif