/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rywang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/04 14:47:38 by rywang            #+#    #+#             */
/*   Updated: 2018/11/04 17:04:51 by rywang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print(int **board)
{
	int rdx;
	int cdx;

	rdx = 0;
	while (rdx <= 8)
	{
		cdx = 0;
		while (cdx <= 8)
		{
			ft_putchar(board[rdx][cdx] + '0');
			if (cdx < 8)
				ft_putchar(' ');
			cdx++;
		}
		ft_putchar('\n');
		rdx++;
	}
}
