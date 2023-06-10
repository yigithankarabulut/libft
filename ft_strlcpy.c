/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykarabul <@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 00:21:47 by ykarabul          #+#    #+#             */
/*   Updated: 2022/12/18 00:21:47 by ykarabul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size > 0)
	{
		while (i < (size - 1) && src[i] != '\0')
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (ft_strlen(src));
}

// src yi dst e size - 1 kadar kopyalar ve '\0' atarak dst i kapatır
// size - 1 olmasının sebebi daha güvenli olmasıymış 'man strlcpy'
// fonksiyon kopyalama işlemi yapsa da dönüş değeri size_t olduğu için src nin uzunluğunu döndürür

/*
#include <stdio.h>
int main()
{
	char str[] = "karabulut";
	char dst[] = "Yigithan";
	ft_strlcpy(dst,str,3);
	printf("%s",dst);
}
*/