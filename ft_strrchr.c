/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykarabul <@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 20:54:06 by ykarabul          #+#    #+#             */
/*   Updated: 2022/12/17 20:54:06 by ykarabul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)s + i);
		i--;
	}
	return (NULL);
}

// *s dizisinde c karakterini arar ve bulduğu yerden sonrasını döndürür
// c karakterini önce s dizisinin sonuna gidip geriye doğru gelerek arar

/*
#include <stdio.h>
int main()
{
	char *s = "----+----";
	printf("%s",ft_strrchr(s,'+'));
}
*/
