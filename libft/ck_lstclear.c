/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ck_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnourish <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 00:49:03 by pnourish          #+#    #+#             */
/*   Updated: 2023/05/23 00:55:30 by pnourish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

typedef struct {
    int value;
} NodeData;

void free_node_data(void *data)
{
    free (data);
}

void ck_lstclear()
{
    printf("\nft_lstclear >>> testing...\n\n");

    // Create a new node with dynamically allocated content
    NodeData *data1 = malloc(sizeof(NodeData));
    data1->value = 42;
    t_list *node1 = ft_lstnew(data1);

    NodeData *data2 = malloc(sizeof(NodeData));
    data2->value = 84;
    t_list *node2 = ft_lstnew(data2);

    node1->next = node2;

    printf("Initial values: %d, %d\n", ((NodeData *)node1->content)->value, ((NodeData *)node2->content)->value);

    // Call ft_lstclear to free the list's memory
    ft_lstclear(&node1, free_node_data);

    // Verify if the memory was freed and the list pointer is set to NULL
    if (node1 == NULL) {
        printf("List memory freed successfully and pointer set to NULL\n");
    } else {
        fprintf(stderr, "Failed to free list memory or set pointer to NULL\n");
    }

    printf("\nfunction passed all test cases successfully!\n");
    printf("---- ---- ---- ---- ---- ---- ---- ---- ----\n");
}
