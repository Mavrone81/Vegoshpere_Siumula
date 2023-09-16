/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 21:11:36 by sfu               #+#    #+#             */
/*   Updated: 2023/09/17 01:45:00 by sfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


void*	ft_memcpy(void* des, void* src, size_t n)
{
	size_t	i;
	char*	c_des;
	char*	c_src;

	i = 0;
	c_des = (char*) des;
	c_src = (char*) src;
	if (des == NULL)
		return(NULL);
	while (i < n)
	{
		c_des[i] = c_src[i];
		i++;
	}
	return(des);
}
/*
typedef struct
{
	char	name[256];
	int	age;
	double	score;
} student;

int	main()
{
	//char 	src[] = "copy this";
	//char 	dest[100];
	student	student1;
	//char	*test = "sai";
	
	strcpy(student1.name, "sai");
	student1.age = 20;
	student1.score = 99;

	student	student2;
	ft_memcpy(&student2, &student1, sizeof(student));

	printf("name of student2 is %s\n", student2.name);
}*/
