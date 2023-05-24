/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnourish <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 01:04:06 by pnourish          #+#    #+#             */
/*   Updated: 2023/05/23 01:08:07 by pnourish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstiter(t_list *lst, void (*f)(void *))
{
 t_list *current;

    if (!lst || !f)
        return;

    current = lst;
    while (current)
    {
        f(current->content);
        current = current->next;
    }
}
