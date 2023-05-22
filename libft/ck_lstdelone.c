/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ck_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnourish <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 08:18:30 by pnourish          #+#    #+#             */
/*   Updated: 2023/05/22 08:23:07 by pnourish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

typedef struct {
    int value;
} NodeData;

void ck_lstdelone() {
   
    printf("\nft_lstdelone >>> testing...\n\n");


   // Create a new node with dynamically allocated content
    NodeData *data = malloc(sizeof(NodeData));
    data->value = 42;

    // Create a list node using ft_lstnew and assign the data as content
    t_list *node = ft_lstnew(data);

    printf("Initial value: %d\n", ((NodeData *)node->content)->value);

    printf("Address of node->content before freeing: %p\n", (void *)node->content);
    void *p_before = (void *)node->content;

    // Call ft_lstdelone to free the node's memory
    ft_lstdelone(node, free);

    // Verify if the memory was freed
    if (node->content != p_before) {
        printf("Node memory freed successfully\n");
    } else {
        fprintf(stderr, "Failed to free node memory\n");
    }

    // Print the address of node->content after freeing
    printf("Address of node->content after freeing: %p\n", (void *)node->content);

	printf("\nfunction passed all test cases successfully!\n");
    printf("---- ---- ---- ---- ---- ---- ---- ---- ----\n");
}

