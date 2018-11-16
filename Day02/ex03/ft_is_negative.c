/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhtut <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 19:31:24 by zhtut             #+#    #+#             */
/*   Updated: 2018/10/25 23:00:22 by zhtut            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void ft_is_negative(int n)
{
	
	if (n > 0 ) 
	{
		ft_putchar('P');
	}
	else if (n < 0)
	{
		ft_putchar('N');
	}
	
}
