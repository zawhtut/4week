/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhtut <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/28 19:44:22 by zhtut             #+#    #+#             */
/*   Updated: 2018/10/28 21:17:48 by zhtut            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

int		calc_base(int size)
{
	int floor;
	int width;
	int floor_step;

	floor = 1;
	width = 1;
	floor_step = 4;
	while (floor <= size)
	{
		width += 2 * (2 + floor);
		floor++;
		width += floor_step;
		if (floor % 2 && floor < size)
			floor_step += 2;
	}
	width -= floor_step;
	return (width);
}

void	put_space(int space)
{
	int pos;

	pos = 0;
	while (pos < space)
	{
		ft_putchar(' ');
		pos++;
	}
}

void	put_block(int size, int floor, int width, int step)
{
	int door;
	int pos;

	door = 1 + 2 * ((floor - 1) / 2);
	pos = 0;
	while (pos < width)
	{
		if (pos == 0)
			ft_putchar('/');
		else if (pos == width - 1)
			ft_putchar('\\');
		else
		{
			if (floor == size && pos >= (width - door) / 2
					&& pos < (width + door) / 2 && 2 + floor - step <= door)
				if (door >= 5 && step == 2 + floor - door / 2 - 1
						&& pos == (width + door) / 2 - 2)
					ft_putchar('$');
				else
					ft_putchar('|');
			else
				ft_putchar('*');
		}
		pos++;
	}
}

void	sastantua(int size)
{
	int	floor;
	int	height;
	int	step;
	int	width;

	if (size < 1)
		return ;
	floor = 1;
	width = 1;
	while (floor <= size)
	{
		height = 2 + floor;
		step = 0;
		while (step < height)
		{
			width += 2;
			put_space((calc_base(size) - width) / 2);
			put_block(size, floor, width, step);
			ft_putchar('\n');
			step++;
		}
		floor++;
		width += 4 + 2 * ((floor - 2) / 2);
	}
}
