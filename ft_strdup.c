/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykarabul <@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 01:01:01 by ykarabul          #+#    #+#             */
/*   Updated: 2022/12/18 01:01:01 by ykarabul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*ptr;
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(s1);
	ptr = (char *)malloc(sizeof(char) * (len + 1));
	if (!ptr)
		return (NULL);
	while (s1[i])
	{
		ptr[i] = s1[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

// Paremetreden gelen *s1 dizisinin uzunluğunu bulup mallocla bellekte yeni bir yer oluşturuyoruz
// Sonra *s1 dizisini yeni açtığımız adrese kopyalar ve yeni oluşturduğumuz diziyi döndürür

/*
#include <stdio.h>
int main()
{
	char *str = "Yigithan";
	printf("%s\n",ft_strdup(str));

	char *ptr = ft_strdup(str);
	printf("%s",ptr);
}
*/