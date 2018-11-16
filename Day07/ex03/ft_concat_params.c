/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhtut <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/01 14:10:21 by zhtut             #+#    #+#             */
/*   Updated: 2018/11/01 19:36:41 by zhtut            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_concat_params(int argc, char **argv)
{
	char	*s;
	char	*b;
	int		i;
	int		j;

	s = NULL;
	b = NULL;
	if (argc > 0)
	{
		s = malloc(sizeof(argv));
		b = s;
		i = 1;
		while (i < argc)
		{
			if (i != 1)
				*s++ = '\n';
			j = 0;
			while (argv[i][j] != '\0')
				*s++ = argv[i][j++];
			i++;
		}
		*s = '\0';
	}
	return (b);
}
