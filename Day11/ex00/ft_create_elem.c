/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhtut <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 15:49:12 by zhtut             #+#    #+#             */
/*   Updated: 2018/11/07 21:41:13 by zhtut            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

t_list	*ft_create_elem(void *data)
{
	t_list *l;

	l = malloc(sizeof(t_list));
	if (!l)
		return (NULL);
	l->data = data;
	l->next = NULL;
	return (l);
}
