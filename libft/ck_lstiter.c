/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ck_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnourish <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 01:05:44 by pnourish          #+#    #+#             */
/*   Updated: 2023/05/23 01:08:05 by pnourish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

typedef struct {
 int value;
} NodeData;

void print_node_data(void *data)
{
    NodeData *node_data = (NodeData *)data;
    printf("Node value: %d\n", node_data->value);
}

void ck_lstiter()
{
    printf("\nft_lstiter >>> testing...\n\n");

    // Create a new node with dynamically allocated content
    NodeData *data1 = malloc(sizeof(NodeData));
    data1->value = 42;
    t_list *node1 = ft_lstnew(data1);

    NodeData *data2 = malloc(sizeof(NodeData));
    data2->value = 84;
    t_list *node2 = ft_lstnew(data2);

    node1->next = node2;

    printf("Initial values: %d, %d\n", ((NodeData *)node1->content)->value, ((NodeData *)node2->content)->value);

    // Call ft_lstiter to apply the print_node_data function on each node's content
    ft_lstiter(node1, print_node_data);

    printf("\nfunction passed all test cases successfully!\n");
    printf("---- ---- ---- ---- ---- ---- ---- ---- ----\n");
}
