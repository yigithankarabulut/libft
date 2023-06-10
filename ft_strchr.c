/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykarabul <@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 20:48:18 by ykarabul          #+#    #+#             */
/*   Updated: 2022/12/17 20:48:18 by ykarabul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
		i--;
	}
	return (NULL);
}

// Parametrede verilen *s dizisinde c karakterini arar ve bulduğu yerden sonrasını döndürür

/*
#include <stdio.h>
int main()
{
	char *str = "42 Kocaeli";
	printf("%s",ft_strchr(str,'K'));
}
*/