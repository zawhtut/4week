/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhtut <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 23:03:36 by zhtut             #+#    #+#             */
/*   Updated: 2018/10/25 23:27:10 by zhtut            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void print_num(char c1, char c2)
{
	ft_putchar(c1);
	ft_putchar(c2);
	if (c1 =='9' && c2 =='9')
	{ }
	else 
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void ft_print_comb2(void) 
{
	for (int k=0; k<=9; k++) {
		print_num(k+'0',k+'0');

		for (int i=0; i<=9; i++)
		{
			for (int j=1; j<=9; j++){
				print_num(i+'0',j+'0');
			}
		}
	}	
}

