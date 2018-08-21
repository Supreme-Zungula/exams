/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzungula <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/24 16:08:46 by yzungula          #+#    #+#             */
/*   Updated: 2018/07/24 16:47:24 by yzungula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_list_remove_if(t_list *lst, void *ref, int (*cmp)(void *, void*))
{
	t_list	*tmp;
	t_list	*node;

	node = lst;
	tmp = NULL;
	if (node->next  == NULL && (*cmp)(ref, node->data) == 0)
		free(node);
	if ((*cmp)(ref, node->data) == 0 && node->next != NULL)
	{
		lst = node->next;
		node->next = NULL;
		free(node);
	}
	while (node->next)
	{
		if ((*cmp)(ref, node->next->data))
		{
			tmp = node->next;
			node->next = tmp->next;
			tmp->next = NULL;
			free(tmp);
		}
		node = node->next;
	}
}
