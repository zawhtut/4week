/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rywang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/04 14:45:56 by rywang            #+#    #+#             */
/*   Updated: 2018/11/04 21:02:30 by rywang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str);

int		**ft_parse(char **argv)
{
	int rdx;
	int cdx;
	int **board;

	rdx = 0;
	board = (int **)malloc(sizeof(int *) * 9);
	while (rdx <= 8)
	{
		if (ft_strlen(argv[rdx]) != 9)
			return (0);
		board[rdx] = (int *)malloc(sizeof(int) * 9);
		cdx = 0;
		while (cdx <= 8)
		{
			if (argv[rdx][cdx] >= '1' && argv[rdx][cdx] <= '9')
				board[rdx][cdx] = argv[rdx][cdx] - '0';
			else if (argv[rdx][cdx] == '.')
				board[rdx][cdx] = 0;
			else
				return (0);
			cdx++;
		}
		rdx++;
	}
	return (board);
}
