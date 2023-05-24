/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ck_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnourish <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 00:49:03 by pnourish          #+#    #+#             */
/*   Updated: 2023/05/24 23:40:55 by pnourish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Function to create a new list node with integer content
t_list *create_node(int value)
{
    t_list *node = (t_list *)malloc(sizeof(t_list));
    if (node != NULL)
    {
        int *content = (int *)malloc(sizeof(int));
        if (content != NULL)
        {
            *content = value;
            node->content = content;
            node->next = NULL;
        }
        else
        {
            free(node);
            return NULL;
        }
    }
    return node;
}

// Function to create a sample list for testing
t_list *create_sample_list()
{
    t_list *head = create_node(1);
    head->next = create_node(2);
    head->next->next = create_node(3);
    head->next->next->next = create_node(4);
    head->next->next->next->next = create_node(5);
    return head;
}

// Custom function to delete the content of a node (assuming content is an int)
void del_int_content(void *content)
{
    free(content);
}

// Custom function to print the content of a node (assuming content is an int)
void print_int_content(void *content)
{
    int *value = (int *)content;
    printf("%d ", *value);
}

// Function to print the entire list
void print_list(t_list *head)
{
    t_list *current = head;
    while (current != NULL)
    {
        print_int_content(current->content);
        current = current->next;
    }
    printf("\n");
}

// Function to check ft_lstclear
void ck_lstclear()
{
    printf("\nft_lstclear >>> testing...\n\n");

    // Test Case 1: Clear a non-empty list
    printf("Test Case 1: Clear a non-empty list\n");
    t_list *list = create_sample_list();
    printf("Initial list: ");
    print_list(list);
    ft_lstclear(&list, del_int_content);
    printf("Cleared list: ");
    print_list(list);
    assert(list == NULL);

    // Test Case 2: Clear an empty list
    printf("Test Case 2: Clear an empty list\n");
    t_list *empty_list = NULL;
    printf("Initial list: ");
    print_list(empty_list);
    ft_lstclear(&empty_list, del_int_content);
    printf("Cleared list: ");
    print_list(empty_list);
    assert(empty_list == NULL);

    // Test Case 3: Clear a list with a single node
    printf("Test Case 3: Clear a list with a single node\n");
    t_list *single_node_list = create_node(10);
    printf("Initial list: ");
    print_list(single_node_list);
    ft_lstclear(&single_node_list, del_int_content);
    printf("Cleared list: ");
    print_list(single_node_list);
    assert(single_node_list == NULL);

    // Test Case 4: Clear a list with multiple nodes
    printf("Test Case 4: Clear a list with multiple nodes\n");
    t_list *multiple_nodes_list = create_sample_list();
    printf("Initial list: ");
    print_list(multiple_nodes_list);
    ft_lstclear(&multiple_nodes_list, del_int_content);
    printf("Cleared list: ");
    print_list(multiple_nodes_list);
    assert(multiple_nodes_list == NULL);

    printf("\nfunction passed all test cases successfully!\n");
    printf("---- ---- ---- ---- ---- ---- ---- ---- ----\n");
}
