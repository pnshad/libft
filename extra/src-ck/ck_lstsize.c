/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ck_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnourish <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 02:25:24 by pnourish          #+#    #+#             */
/*   Updated: 2023/05/24 02:29:17 by pnourish         ###   ########.fr       */
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

void ck_lstsize(void)
{
    printf("\nft_lstsize >>> testing...\n\n");

    // Create a new list with multiple nodes
    int value1 = 42;
    int value2 = 24;
    int value3 = 15;
    t_list *list = st_lstnew(&value1);
    list->next = st_lstnew(&value2);
    list->next->next = st_lstnew(&value3);

    // Test Case 1: Get the size of the list
    int size = ft_lstsize(list);
    printf("Test Case 1: Get the size of the list\n");
    printf("    List size: %d\n\n", size);
    assert(size == 3);

    // Test Case 2: Empty list
    t_list *empty_list = NULL;
    size = ft_lstsize(empty_list);
    printf("Test Case 2: Empty list\n");
    printf("    List size: %d\n\n", size);
    assert(size == 0);

    printf("function passed all test cases successfully!\n");
    printf("---- ---- ---- ---- ---- ---- ---- ---- ----\n");

    // Free memory allocated for the list nodes
    st_lstclear(&list, NULL);
}

