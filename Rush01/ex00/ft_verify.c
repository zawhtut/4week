/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_verify.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rywang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/04 14:43:58 by rywang            #+#    #+#             */
/*   Updated: 2018/11/04 17:11:32 by rywang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_verify(int **board, int row, int col, int num)
{
	int idx;
	int rdx;
	int cdx;

	idx = 0;
	while (idx < 9)
	{
		if ((board[row][idx] == num) || (board[idx][col] == num))
			return (0);
		idx++;
	}
	rdx = 0;
	while (rdx < 3)
	{
		cdx = 0;
		while (cdx < 3)
		{
			if (board[(row / 3) * 3 + rdx][(col / 3) * 3 + cdx] == num)
				return (0);
			cdx++;
		}
		rdx++;
	}
	return (1);
}
