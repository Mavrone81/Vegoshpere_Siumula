/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 00:27:22 by sfu               #+#    #+#             */
/*   Updated: 2023/10/21 00:44:03 by sfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	while (lst != NULL && lst->next != NULL)
	{
		lst = lst->next;
	}
	return (lst);
}
/*t_list* createNode(t_list *data) {
    t_list* newNode = malloc(sizeof(t_list));
    if (newNode == NULL) {
        fprintf(stderr, "Memory allocation error\n");
        exit(EXIT_FAILURE);
    }
    newNode->content= data;
    newNode->next = NULL;
    return newNode;
}

int main() {
	char*	data = "test";

    // Test Case 1: Empty List
    t_list* emptyList = NULL;
    t_list* lastEmpty = ft_lstlast(emptyList);
    printf("Last element of empty list: %p\n", (void*)lastEmpty);  // Expected output: NULL

    // Test Case 2: List with a Single Node
    t_list* singleNodeList = createNode(data);
    t_list* lastSingle = ft_lstlast(singleNodeList);
    printf("Last element of list with a single node: %p\n", (void*)lastSingle);  // Expected output: Address of the single node

    // Test Case 3: List with Multiple Nodes
    t_list* multiNodeList = createNode(10);
    multiNodeList->next = createNode(20);
    multiNodeList->next->next = createNode(30);
    t_list* lastMulti = ft_lstlast(multiNodeList);
    printf("Last element of list with multiple nodes: %p\n", (void*)lastMulti);  // Expected output: Address of the last node

    // Clean up memory (free nodes)
    free(singleNodeList);
    free(multiNodeList->next);
    free(multiNodeList->next->next);
    free(multiNodeList);

    return 0;
}*/
