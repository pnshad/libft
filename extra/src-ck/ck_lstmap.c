/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ck_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnourish <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 01:19:32 by pnourish          #+#    #+#             */
/*   Updated: 2023/05/24 23:53:11 by pnourish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "my_libmy.h"

typedef struct {
    int value;
} NodeData;

void *modify_node_data(void *data)
{
    NodeData *node_data = (NodeData *)data;
    node_data->value *= 2;
    return node_data;
}

void ck_lstmap()
{
    printf("\nft_lstmap >>> testing...\n\n");

    // Create a new node with dynamically allocated content
    NodeData *data1 = malloc(sizeof(NodeData));
    data1->value = 42;
    t_list *node1 = ft_lstnew(data1);

    NodeData *data2 = malloc(sizeof(NodeData));
    data2->value = 84;
    t_list *node2 = ft_lstnew(data2);

    node1->next = node2;

    printf("Initial values: %d, %d\n", ((NodeData *)node1->content)->value, ((NodeData *)node2->content)->value);

    // Call ft_lstmap to apply the modify_node_data function on each node's content
    t_list *new_list = ft_lstmap(node1, modify_node_data, free);
    if (new_list == NULL)
    {
        printf("Allocation failed. Exiting...\n");
        return;
    }

    printf("Modified values: %d, %d\n", ((NodeData *)new_list->content)->value, ((NodeData *)new_list->next->content)->value);

    // Free the memory allocated for the new list
    ft_lstclear(&new_list, free);

    printf("\nfunction passed all test cases successfully!\n");
    printf("---- ---- ---- ---- ---- ---- ---- ---- ----\n");
}

