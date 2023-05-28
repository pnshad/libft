/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ck_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnourish <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 01:05:44 by pnourish          #+#    #+#             */
/*   Updated: 2023/05/24 23:52:26 by pnourish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "my_libmy.h"

// Function to create a new list node with integer content
static t_list *st_create_node(int value)
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
static t_list *st_create_sample_list()
{
    t_list *head = st_create_node(1);
    head->next = st_create_node(2);
    head->next->next = st_create_node(3);
    head->next->next->next = st_create_node(4);
    head->next->next->next->next = st_create_node(5);
    return head;
}

// Custom function to print the content of a node (assuming content is an int)
static void st_print_int_content(void *content)
{
    int *value = (int *)content;
    printf("%d ", *value);
}

// Function to print the entire list
static void st_print_list(t_list *head)
{
    t_list *current = head;
    while (current != NULL)
    {
        st_print_int_content(current->content);
        current = current->next;
    }
    printf("\n");
}

// Custom function to square the content of a node (assuming content is an int)
void square_int_content(void *content)
{
    int *value = (int *)content;
    *value *= *value;
}

// Function to check ft_lstiter
void ck_lstiter()
{
    printf("\nft_lstiter >>> testing...\n\n");

    // Test Case 1: Apply function to a non-empty list
    printf("Test Case 1: Apply function to a non-empty list\n");
    t_list *list = st_create_sample_list();
    printf("Initial list: ");
    st_print_list(list);
    printf("Applying square function to the list...\n");
    ft_lstiter(list, square_int_content);
    printf("Modified list: ");
    st_print_list(list);

    // Test Case 2: Apply function to an empty list
    printf("Test Case 2: Apply function to an empty list\n");
    t_list *empty_list = NULL;
    printf("Initial list: ");
    st_print_list(empty_list);
    printf("Applying square function to the list...\n");
    ft_lstiter(empty_list, square_int_content);
    printf("Modified list: ");
    st_print_list(empty_list);

    // Test Case 3: Apply function to a list with a single node
    printf("Test Case 3: Apply function to a list with a single node\n");
    t_list *single_node_list = st_create_node(10);
    printf("Initial list: ");
    st_print_list(single_node_list);
    printf("Applying square function to the list...\n");
    ft_lstiter(single_node_list, square_int_content);
    printf("Modified list: ");
    st_print_list(single_node_list);

    // Test Case 4: Apply function to a list with multiple nodes
    printf("Test Case 4: Apply function to a list with multiple nodes\n");
        t_list *multiple_nodes_list = st_create_sample_list();
    printf("Initial list: ");
    st_print_list(multiple_nodes_list);
    printf("Applying square function to the list...\n");
    ft_lstiter(multiple_nodes_list, square_int_content);
    printf("Modified list: ");
    st_print_list(multiple_nodes_list);

    printf("\nfunction passed all test cases successfully!\n");
    printf("---- ---- ---- ---- ---- ---- ---- ---- ----\n");
}
