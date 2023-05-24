/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnourish <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 02:44:42 by pnourish          #+#    #+#             */
/*   Updated: 2023/05/23 02:48:29 by pnourish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

typedef struct      s_list
{
    void            *content;
    struct  s_list  *next;
}                   t_list;

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *last;

	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}

	last = *lst;
	while (last->next != NULL)
		last = last->next;

	last->next = new;
}

