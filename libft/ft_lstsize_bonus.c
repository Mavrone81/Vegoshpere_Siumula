/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 00:10:47 by sfu               #+#    #+#             */
/*   Updated: 2023/10/20 01:01:36 by sfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	while (lst)
	{
		count++;
		lst = lst->next;
	}
	return (count);
}
/*
int main() 
{
    // Test Case 1: Empty List
    struct Node* emptyList = NULL;
    int sizeEmpty = countLinkedListSize(emptyList);
    printf("Size of empty list: %d\n", sizeEmpty);  // Expected output: 0

    // Test Case 2: List with a Single Node
    struct Node* singleNodeList = createNode(42);
    int sizeSingle = countLinkedListSize(singleNodeList);
    printf("Size of list with a single node: %d\n", sizeSingle);  // Expected output: 1

    // Test Case 3: List with Multiple Nodes
    struct Node* multiNodeList = createNode(10);
    multiNodeList->next = createNode(20);
    multiNodeList->next->next = createNode(30);
    int sizeMulti = countLinkedListSize(multiNodeList);
    printf("Size of list with multiple nodes: %d\n", sizeMulti);  // Expected output: 3

    // Clean up memory (free nodes)
    free(singleNodeList);
    free(multiNodeList->next);
    free(multiNodeList->next->next);
    free(multiNodeList);

    return 0;
}*/
