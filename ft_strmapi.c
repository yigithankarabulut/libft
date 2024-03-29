/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykarabul <@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 02:32:11 by ykarabul          #+#    #+#             */
/*   Updated: 2022/12/18 02:32:11 by ykarabul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	if (!(s || f))
		return (NULL);
	i = 0;
	str = (char *)ft_calloc(ft_strlen(s) + 1, sizeof(char));
	if (!str)
		return (NULL);
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	return (str);
}

// *s dizisinin her bi indeksine parametredeki fonksiyon uygulanır

/*
#include <stdio.h>
char ft_iter(unsigned int i, char c)
{
	return(ft_tolower(c));
}

int main()
{
	char *str = "YigitHAN KAraBULut";
	str = ft_strmapi(str,ft_iter);
	printf("%s",str);
}
*/