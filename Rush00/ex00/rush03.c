/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhtut <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/28 15:06:09 by zhtut             #+#    #+#             */
/*   Updated: 2018/10/28 17:24:50 by zhtut            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define TOP_L 'A'
#define TOP_R 'C'
#define HOZ_E 'B'
#define VER_E 'B'
#define BOT_L 'A'
#define BOT_R 'C'

int		ft_putchar(char c);

void	ft_putln(int x, char a, char b, char c)
{
	int ix;

	ix = 0;
	while (++ix <= x)
	{
		if (ix == 1)
			ft_putchar(a);
		else if (ix == x)
			ft_putchar(c);
		else
			ft_putchar(b);
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int iy;

	iy = 0;
	if (x > 0 && y > 0)
	{
		while (++iy <= y)
		{
			if (iy == 1)
				ft_putln(x, TOP_L, HOZ_E, TOP_R);
			else if (iy == y)
				ft_putln(x, BOT_L, HOZ_E, BOT_R);
			else
				ft_putln(x, VER_E, ' ', VER_E);
		}
	}
}
