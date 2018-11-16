/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhtut <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/01 14:06:34 by zhtut             #+#    #+#             */
/*   Updated: 2018/11/01 17:02:16 by zhtut            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int i;
	int *range;

	if (min >= max)
		return (0);
	range = malloc((max - min) * sizeof(int));
	i = (max - min) + 1;
	if (!range)
		return (range);
	i = 0;
	while (min < max)
	{
		range[i] = min;
		i++;
		++min;
	}
	return (range);
}
