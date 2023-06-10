/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykarabul <@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 23:05:20 by ykarabul          #+#    #+#             */
/*   Updated: 2022/12/17 23:05:20 by ykarabul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!dst && !src)
		return (0);
	while (i < n)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dst);
}

// src nin n kadarını dst e kopyalar ve dst i döndürür

// Aşağıdaki durumda overloop denilen durum oluşuyor bunun önüne geçmek için memmove kullanılıyor

/*
#include <stdio.h>
int main()
{
	char src[] = "012345678";
	printf("%s",ft_memcpy(src + 2,src,7));
}
*/