/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ck_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnourish <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 08:18:30 by pnourish          #+#    #+#             */
/*   Updated: 2023/05/24 13:41:59 by pnourish         ###   ########.fr       */
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

void ck_lstdelone(void)
{
    printf("\nft_lstdelone >>> testing...\n\n");

    // Create a new node
    int value = 42;
    t_list *node = st_lstnew(&value);
    printf("Initial node: %d\n\n", *((int *)node->content));

    // Test Case 1: Delete the node
    printf("Test Case 1: Delete the node\n");
    ft_lstdelone(node, NULL);
    printf("Node deleted successfully!\n");
    printf("---- ---- ---- ---- ---- ---- ---- ---- ----\n");

    // Create a new list with multiple nodes
    int value1 = 42;
    int value2 = 24;
    int value3 = 15;
    t_list *list = st_lstnew(&value1);
    list->next = st_lstnew(&value2);
    list->next->next = st_lstnew(&value3);
    printf("Initial list:\n");
    printf("node 1 content: %d\n", *((int *)list->content));
    printf("node 1 pointer: %p\n", list->content);
    printf("node 2 content: %d\n", *((int *)list->next->content));
    printf("node 2 pointer: %p\n", list->next->content);
    printf("node 3 content: %d\n", *((int *)list->next->next->content));
    printf("node 3 pointer: %p\n\n", list->next->next->content);
	int *last_address = list->next->next->content;

    // Test Case 2: Delete the last node
    printf("Test Case 2: Delete the last node\n");
    ft_lstdelone(list->next->next, NULL);
    printf("Modified list:\n");
    printf("node 1 content: %d\n", *((int *)list->content));
    printf("node 1 pointer: %p\n", list->content);
    printf("node 2 content: %d\n", *((int *)list->next->content));
    printf("node 2 pointer: %p\n", list->next->content);
    printf("node 3 previous pointer: %p\n", (void *)last_address);
    printf("node 3  current pointer: %p\n\n", list->next->next->content);

	assert(list->next->next->content != last_address);

    // Test Case 3: Delete the last node again
    printf("Test Case 3: Delete the last node again\n");
    last_address = list->next->content;
	ft_lstdelone(list->next, NULL);
    
    printf("Modified list:\n");
    printf("node 1 content: %d\n", *((int *)list->content));
    printf("node 1 pointer: %p\n", list->content);
    printf("node 2 previous pointer: %p\n", (void *)last_address);
    printf("node 2  current pointer: %p\n\n", list->next->content);

	assert(list->next->content != last_address);
	list->next = NULL;

    printf("function passed all test cases successfully!\n");
    printf("---- ---- ---- ---- ---- ---- ---- ---- ----\n");

    // Free memory allocated for the list
    st_lstclear(&list, NULL);
}
