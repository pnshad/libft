/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ck_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnourish <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 13:55:54 by pnourish          #+#    #+#             */
/*   Updated: 2023/05/20 20:18:58 by pnourish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ck_lstnew(void)
{
    printf("\nft_lstnew >>> testing...\n\n");
	
	// Test Case 1: Create a new list node with integer content
    int value1 = 42;
    printf("Test Case 1: New node to be created with integer content\n");
	printf("    source inout: %d\n", value1);
    t_list *node1 = ft_lstnew(&value1);
	printf("ft_lstnew's node: %d\n\n", *((int *)node1->content));
	assert(memcmp(&value1, node1->content, sizeof(int))==0);

    // Test Case 2: Create a new list node with string content
    char *value2 = "Hello, world!";
    printf("Test Case 2: New node created with string content\n");
	printf("    source inout: %s\n", value2);
    t_list *node2 = ft_lstnew(value2);
	printf("ft_lstnew's node: %s\n\n", (char *)node2->content);
	assert(strcmp(value2, (char *)node2->content)==0);

    // Test Case 3: Create a new list node with a custom struct as content
    typedef struct {
        char name[20];
        int age;
    } id_list;

    id_list person = {"John Doe", 25};
    printf("Test Case 3: New node created with custom struct content\n");
	printf("    source inout: %s, %d\n", person.name, person.age);
    t_list *node3 = ft_lstnew(&person);
    id_list *node_out = (id_list *)node3->content;
	printf("ft_lstnew's node: %s, %d\n\n", node_out->name, node_out->age);
	assert(memcmp(&person, node3->content, sizeof(id_list)) == 0);

    // Test Case 4: Create a new list node with NULL content
    printf("Test Case 4: New node created with NULL content\n");
	printf("    source inout: %s\n", (char *)NULL);
    t_list *node4 = ft_lstnew(NULL);
	printf("ft_lstnew's node: %s\n\n", (char *)node4->content);
	assert(node4->content == NULL);

    printf("function passed all test cases successfully!\n");
    printf("---- ---- ---- ---- ---- ---- ---- ---- ----\n");

    // Free memory allocated for the list nodes
    free(node1);
    free(node2);
    free(node3);
    free(node4);
}

