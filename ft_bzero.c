/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykarabul <@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 23:04:13 by ykarabul          #+#    #+#             */
/*   Updated: 2022/12/17 23:04:13 by ykarabul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}

// *s dizisine n kadar null atar
// #include <stdio.h>
// int main()
// {
// 	char str[] = "Hello World";
// 	ft_bzero(str, 5);
// 	printf("%c\n", str[6]);
// 	return (0);
// }