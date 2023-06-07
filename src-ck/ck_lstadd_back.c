/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ck_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnourish <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 03:19:07 by pnourish          #+#    #+#             */
/*   Updated: 2023/05/24 03:19:28 by pnourish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "my_libmy.h"

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

void ck_lstadd_back(void)
{
    printf("\nft_lstadd_back >>> testing...\n\n");

    // Create a new list with multiple nodes
    int value1 = 42;
    int value2 = 24;
    int value3 = 15;
    t_list *list = st_lstnew(&value1);
    list->next = st_lstnew(&value2);
    list->next->next = st_lstnew(&value3);
    printf("Initial list:\n");
    printf("    node 1: %d\n", *((int *)list->content));
    printf("    node 2: %d\n", *((int *)list->next->content));
    printf("    node 3: %d\n\n", *((int *)list->next->next->content));

    // Test Case 1: Add a new node at the back of the list
    int value4 = 7;
    printf("Test Case 1: Add a new node at the back of the list\n");
    printf("    new node: %d\n", value4);
    t_list *new_node = st_lstnew(&value4);
    ft_lstadd_back(&list, new_node);
    printf("Modified list:\n");
    printf("    node 1: %d\n", *((int *)list->content));
    printf("    node 2: %d\n", *((int *)list->next->content));
    printf("    node 3: %d\n", *((int *)list->next->next->content));
    printf("    node 4: %d\n\n", *((int *)list->next->next->next->content));
    assert(*((int *)list->next->next->next->content) == value4);

    // Test Case 2: Add a new node to an empty list
    t_list *empty_list = NULL;
    int value5 = 99;
    printf("Test Case 2: Add a new node to an empty list\n");
    printf("    new node: %d\n", value5);
    t_list *new_node2 = st_lstnew(&value5);
    ft_lstadd_back(&empty_list, new_node2);
    printf("Modified list:\n");
    printf("    node 1: %d\n\n", *((int *)empty_list->content));
    assert(*((int *)empty_list->content) == value5);

    printf("function passed all test cases successfully!\n");
    printf("---- ---- ---- ---- ---- ---- ---- ---- ----\n");

    // Free memory allocated for the list nodes
    st_lstclear(&list, NULL);
    st_lstclear(&empty_list, NULL);
}
