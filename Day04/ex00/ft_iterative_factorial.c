/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhtut <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/27 18:01:45 by zhtut             #+#    #+#             */
/*   Updated: 2018/10/27 18:43:11 by zhtut            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int fact;

	fact = 1;
	if (nb < 0 || nb > 12)
		return (0);
	while (nb > 0)
	{
		fact = fact * nb;
		nb--;
	}
	return (fact);
}
