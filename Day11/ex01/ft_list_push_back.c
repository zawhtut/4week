/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhtut <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 20:56:30 by zhtut             #+#    #+#             */
/*   Updated: 2018/11/07 22:20:32 by zhtut            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *i;

	if (begin_list)
	{
		if (*begin_list == NULL)
			*begin_list = ft_creat_elem(data);
		else
		{
			i = (*begin_list);
			while ((*i).next != NULL)
				i = (*i).next;
			(*i).next = ft_create_elem(data);
		}
	}
}
