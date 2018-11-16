/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhtut <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/31 17:15:41 by zhtut             #+#    #+#             */
/*   Updated: 2018/10/31 19:09:25 by zhtut            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putchar(char c);

void	ft_put_arg(char const *c)
{
	int j;

	j = 0;
	while (c[j] != '\0')
	{
		ft_putchar(c[j]);
		++j;
	}
	ft_putchar('\n');
}

int		ft_strcmp(char const *s1, char const *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		++i;
	return (s1[i] - s2[i]);
}

void	ft_swap(int *a, int *b)
{
	int c;

	if (a && b)
	{
		c = *a;
		*a = *b;
		*b = c;
	}
}

int		main(int argc, char const *argv[])
{
	int m;
	int n;
	int k;
	int arg[argc];

	m = 1;
	while (m < argc)
	{
		arg[m] = m;
		m++;
	}
	n = 1;
	while (n < argc)
	{
		k = n;
		while (k < argc)
		{
			if (ft_strcmp(argv[arg[n]], argv[arg[k]]) > 0)
				ft_swap(&arg[n], &arg[k]);
			k++;
		}
		ft_put_arg(argv[arg[n]]);
		n++;
	}
	return (0);
}
