/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzungula <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/24 14:21:42 by yzungula          #+#    #+#             */
/*   Updated: 2018/07/24 14:31:11 by yzungula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		ft_list_size(t_list	*begin_list)
{
	int		size;
	t_list	*node;

	size = 0;
	node = begin_list;
	while (node)
	{
		size++;
		node = node->next;
	}
	return (size);
}
