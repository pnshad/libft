/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ck_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnourish <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 03:17:55 by pnourish          #+#    #+#             */
/*   Updated: 2023/05/24 01:57:05 by pnourish         ###   ########.fr       */
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

void ck_lstadd_front(void)
{
    printf("\nft_lstadd_front >>> testing...\n\n");

    // Create a new list with initial node
    int value1 = 42;
    printf("Initial list:\n");
    printf("    node 1: %d\n", value1);
    t_list *list = st_lstnew(&value1);

    // Test Case 1: Add a new node at the front of the list
    int value2 = 24;
    printf("Test Case 1: Add new node at the front of the list\n");
    printf("    new node: %d\n", value2);
    ft_lstadd_front(&list, st_lstnew(&value2));
    printf("Modified list:\n");
    printf("    node 1: %d\n", *((int *)list->content));
    printf("    node 2: %d\n\n", *((int *)list->next->content));
    assert(memcmp(&value2, list->content, sizeof(int)) == 0);

    // Test Case 2: Add a new node with string content at the front of the list
    char *value3 = "Hello!";
    printf("Test Case 2: Add new node with string content at the front of the list\n");
    printf("    new node: %s\n", value3);
    ft_lstadd_front(&list, st_lstnew(value3));
    printf("Modified list:\n");
    printf("    node 1: %s\n", (char *)list->content);
    printf("    node 2: %d\n", *((int *)list->next->content));
    printf("    node 3: %d\n\n", *((int *)list->next->next->content));
    assert(strcmp(value3, (char *)list->content) == 0);

    printf("function passed all test cases successfully!\n");
    printf("---- ---- ---- ---- ---- ---- ---- ---- ----\n");

    // Free memory allocated for the list nodes
    st_lstclear(&list, NULL);
}

