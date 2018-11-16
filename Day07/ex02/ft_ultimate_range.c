/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhtut <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/01 14:07:10 by zhtut             #+#    #+#             */
/*   Updated: 2018/11/01 20:20:33 by zhtut            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int *rn;
	int i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	rn = (int*)malloc(sizeof(*rn) * (max - min));
	i = 0;
	while (min < max)
	{
		rn[i] = min;
		i++;
		min++;
	}
	*range = rn;
	return (i);
}
