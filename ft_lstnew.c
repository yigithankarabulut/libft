/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykarabul <@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 17:26:53 by ykarabul          #+#    #+#             */
/*   Updated: 2022/12/18 23:32:28 by ykarabul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}

// content ile yeni bir düğüm oluşturur ve yeni düğümün adresini döndürür

// #include <stdio.h>

// int main()
// {
// 	t_list *node1, *node2;
// 	t_list *new1, *new2;

// 	node1 = ft_lstnew("node1");
// 	node2 = ft_lstnew("node2");
// 	node1->next = node2;
// 	//node1 node2 ve new1 new2 nin iki farklı oluşturulma örneği lstnew bizim için aşağıdaki işlemi yapıyor
// 	new1 = (t_list *)malloc(sizeof(t_list));
// 	new2 = (t_list *)malloc(sizeof(t_list));
// 	new1->content = "new1";
// 	new2->content = "new2";
// 	new1->next = new2;

// 	printf("%s\n", node1->content);
// 	printf("%s\n", node1->next->content);
// 	printf("%s\n", new1->content);
// 	printf("%s\n", new1->next->content);
// }
