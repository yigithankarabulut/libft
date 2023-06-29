/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykarabul <@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 19:35:11 by ykarabul          #+#    #+#             */
/*   Updated: 2022/12/19 00:06:34 by ykarabul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!f)
		return ;
	while (lst)
	{
		(*f)(lst->content);
		lst = lst->next;
	}
}

// #include <stdio.h>

// void print_list(void *content)
// {
// 	printf("%s\n", content);
// }

// int main()
// {
// 	t_list *node1, *node2, *node3;
// 	node1 = ft_lstnew("node1");
// 	node2 = ft_lstnew("node2");
// 	node3 = ft_lstnew("node3");

// 	ft_lstadd_back(&node1, node2);
// 	ft_lstadd_back(&node1, node3);

// 	ft_lstiter(node1, print_list);
// }


// linked listin her bir contentini f fonksiyonuna gönderir