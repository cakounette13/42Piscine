/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Delrieux Carine <Delrieux Carine@student.42.fr>  #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-10-12 18:40:17 by Delrieux Carine   #+#    #+#             */
/*   Updated: 2026-10-12 18:40:17 by Delrieux Carine  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_abs.h"

int main(void)
{
    Nombre x = {-9};

    printf("%d\n", ABS(x.value));
    return (0);
}