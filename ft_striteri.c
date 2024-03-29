/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykarabul <@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 02:50:18 by ykarabul          #+#    #+#             */
/*   Updated: 2022/12/18 02:50:18 by ykarabul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (s)
	{
		i = 0;
		while (s[i])
		{
			f(i, &s[i]);
			i++;
		}
	}
}

// *s dizisinin her indeksini sırasıyla parametredeki fonksiyona parametre olarak gönderilir

/*
#include <stdio.h>

void ft_iter(unsigned int i, char *str)
{
	*str = ft_tolower(*str);
}

int main()
{
	char str[] = "YigitHAN KAraBULut";
	ft_striteri(str,ft_iter);
	printf("%s",str);
}
*/