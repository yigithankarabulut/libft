/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykarabul <@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 18:32:00 by ykarabul          #+#    #+#             */
/*   Updated: 2022/12/18 23:38:33 by ykarabul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	if (!*lst)
		*lst = new;
	else
	{
		temp = ft_lstlast(*lst);
		temp->next = new;
	}
}

// #include <stdio.h>

// int main()
// {
// 	t_list *node1;
// 	t_list *node2;
// 	t_list *node3;

// 	node1 = ft_lstnew("node1");
// 	node2 = ft_lstnew("node2");
// 	node3 = ft_lstnew("node3");
// 	node1->content = "Yigit";
// 	node2->content = "Kara";
// 	node3->content = "Bulut";
// 	node1->next = node2;
// 	ft_lstadd_back(&node1, node3);
// 	printf("%s\n", node1->next->next->content);
// }