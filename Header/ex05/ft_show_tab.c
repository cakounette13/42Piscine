/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Delrieux Carine <Delrieux Carine@student.42.fr>  #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-10-15 09:35:29 by Delrieux Carine   #+#    #+#             */
/*   Updated: 2026-10-15 09:35:29 by Delrieux Carine  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_stock_str.h"

struct s_stock_str *ft_strs_to_tab(int ac, char **av);

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

char    *ft_putstr(char *string)
{
    int i;

    i = 0;
    while (string[i] != '\0')
    {
        ft_putchar(string[i]);
        i++;
    }
    return (string);
}

void    ft_putnbr(int nb)
{
    long n;

    n = nb;
    if (n < 0)
    {
        ft_putchar('-');
        n = -n;
    }
    if (n > 9)
        ft_putnbr(n / 10);
    ft_putchar((n % 10) + '0');
}

void    ft_show_tab(struct s_stock_str *par)
{
    if (!par)
	    return;
	int i = 0;
    while (par[i].string)
    {
        write(1, "String : ", 9);
        ft_putstr(par[i].string);
        ft_putchar('\n');
        write(1, "Size : ", 7);
        ft_putnbr(par[i].size);
        ft_putchar('\n');
        write(1, "Copy : ", 7);
        ft_putstr(par[i].copy);
        ft_putchar('\n');
        i++;   	
    }
}

int main(void)
{
    char    *av[] = {"framboise"};
    int     ac = 1;
    s_stock_str *par;
    int i;
   
    i = 0;
    while (i < ac)
    {
        par = ft_strs_to_tab(ac, av);
        i++;
    }
    ft_show_tab(par);
    free(par);
	return (0);
}