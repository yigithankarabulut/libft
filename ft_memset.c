/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykarabul <@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 22:56:23 by ykarabul          #+#    #+#             */
/*   Updated: 2022/12/17 22:56:23 by ykarabul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		((unsigned char *)b)[i] = (unsigned char)c;
		i++;
	}
	return (b);
}

// b dizisine len kadar c karakterini kopyalar ve b dizisinin yeni halini döndürür

/*
#include <stdio.h>
int main()
{
	char str[] = "42 Kocaeli";
	printf("%s",ft_memset(str, 'a', 3));
}
*/