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
void    ft_bzero(void *s, size_t n);
// void	*ft_calloc(size_t count, size_t size);
int	ft_isalnum(char *str);
int ft_isalpha(char *str);
int	ft_isascii(char *str);
int	ft_isdigit(char *str);
int	ft_isprint(char *str);
void	*ft_memchr(const void *s, int c, size_t n);
// int	ft_memcmp(const void *s1, const void *s2, size_t n);
// void	*ft_memcpy(void *dest, const void *src, size_t n);
// void	*ft_memmove(void *dest, const void *src, size_t length);
// void	*ft_memset(void *str, int value, size_t n);
// char	*ft_strchr(const char *str, int c);
char	*ft_strdup(char *src);
// size_t	ft_strlcat(char *dest, const char *src, size_t size);
// size_t	ft_strlcpy(char *dest, const char *src, size_t size);
int	ft_strlen(char *str);
// int	ft_strncmp(const char *s1, const char *s2, size_t n);
// char	*ft_strnstr(const char *big, const char *little, size_t len);
// char	*ft_strrchr(const char *str, int c);
char	*ft_tolower(char *str);
char	*ft_toupper(char *str);

#endif