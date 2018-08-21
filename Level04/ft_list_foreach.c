/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzungula <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/24 15:38:47 by yzungula          #+#    #+#             */
/*   Updated: 2018/07/24 15:44:09 by yzungula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	t_list	*node;

	node = begin_list;
	while (node)
	{
		(*f)(node->data);
		node = node->next;
	}
}
