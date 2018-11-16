/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rywang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/04 14:40:46 by rywang            #+#    #+#             */
/*   Updated: 2018/11/04 17:11:16 by rywang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_verify(int **board, int row, int col, int num);

int		ft_solve(int **board, int row, int col)
{
	int num;

	num = 1;
	if (row >= 8 && col > 8)
		return (1);
	if (col > 8 && ++row)
		col = 0;
	if (board[row][col] != 0)
		return (ft_solve(board, row, col + 1));
	while (num < 10)
	{
		if (ft_verify(board, row, col, num))
		{
			board[row][col] = num;
			if (ft_solve(board, row, col + 1))
				return (1);
			else
				board[row][col] = 0;
		}
		num++;
	}
	return (0);
}
