/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhtut <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 18:20:20 by zhtut             #+#    #+#             */
/*   Updated: 2018/11/06 20:14:36 by zhtut            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int i;
	int *retab;

	i = 0;
	retab = (int*)malloc(sizeof(*tab) * length);
	while ((*tab) && i < length)
	{
		retab[i] = f(tab[i]);
		i++;
	}
	return (retab);
}
