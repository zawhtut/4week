/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rywang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/04 14:51:03 by rywang            #+#    #+#             */
/*   Updated: 2018/11/04 23:37:04 by rywang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		**ft_parse(char **argv);
int		ft_solve(int **board, int row, int col);
void	ft_print(int **board);
void	ft_error(void);

int		main(int argc, char **argv)
{
	int **board;

	if (argc == 10)
	{
		if (!(board = ft_parse(&argv[1])))
			ft_error();
		else if (ft_solve(board, 0, 0))
		{
			ft_print(board);
			free(board);
		}
		else
			ft_error();
	}
	else
		ft_error();
	return (0);
}
