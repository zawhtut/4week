/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhtut <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 21:06:00 by zhtut             #+#    #+#             */
/*   Updated: 2018/11/07 22:25:40 by zhtut            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *node;

	if (*begin_list == NULL)
		*begin_list = ft_create_elem(data);
	else
	{
		node = ft_create_elem(data);
		(*node).next = (*begin_list);
		*begin_list = node;
	}
}
