/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ck_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnourish <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 02:42:00 by pnourish          #+#    #+#             */
/*   Updated: 2023/05/24 02:53:25 by pnourish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

// Static function: st_lstnew
static t_list *st_lstnew(void *content)
{
    t_list *new_node = (t_list *)malloc(sizeof(t_list));
    if (new_node == NULL)
        return NULL;
    new_node->content = content;
    new_node->next = NULL;
    return new_node;
}

// Static function: st_lstclear
static void st_lstclear(t_list **lst, void (*del)(void *))
{
    if (lst == NULL || *lst == NULL)
        return;
    t_list *current = *lst;
    t_list *next;

    while (current != NULL)
    {
        next = current->next;
        if (del != NULL)
            del(current->content);
        free(current);
        current = next;
    }
    *lst = NULL;
}

void ck_lstlast(void)
{
    printf("\nft_lstlast >>> testing...\n\n");

    // Create a new list with multiple nodes
    int value1 = 42;
    int value2 = 24;
    int value3 = 15;
    t_list *list = st_lstnew(&value1);
    list->next = st_lstnew(&value2);
    list->next->next = st_lstnew(&value3);
	printf("      list:\n");
    printf("    node 1: %d\n", *((int *)list->content));
    printf("    node 2: %d\n", *((int *)list->next->content));
    printf("    node 3: %d\n\n", *((int *)list->next->next->content));

    // Test Case 1: Get the last node of the list
    t_list *last_node = ft_lstlast(list);
    printf("Test Case 1: Get the last node of the list\n");
    printf("    Last node: %d\n\n", *((int *)last_node->content));
    assert(*((int *)last_node->content) == value3);

    // Test Case 2: Empty list
    t_list *empty_list = NULL;
    last_node = ft_lstlast(empty_list);
    printf("Test Case 2: Empty list\n");
    printf("    Last node: %p\n\n", last_node);
    assert(last_node == NULL);

    printf("function passed all test cases successfully!\n");
    printf("---- ---- ---- ---- ---- ---- ---- ---- ----\n");

    // Free memory allocated for the list nodes
    st_lstclear(&list, NULL);
}

