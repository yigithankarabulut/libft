/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykarabul <@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 21:05:19 by ykarabul          #+#    #+#             */
/*   Updated: 2022/12/17 21:05:19 by ykarabul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*str;
	size_t	i;

	i = 0;
	str = (char *)s;
	while (i < n)
	{
		if (*str == (char)c)
			return (str);
		i++;
		str++;
	}
	return (NULL);
}
/*
 *s te n kadar c karakterini arar bulursa s'in kalanını döndürür

#include <stdio.h>
int main()
{
	const char *str = "Yigithan Karabulut";
	int c = 97;
	size_t n = 7;
	printf("%s",(char *)ft_memchr(str,c,n));
}
*/