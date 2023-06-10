/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykarabul <@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 20:59:08 by ykarabul          #+#    #+#             */
/*   Updated: 2022/12/17 20:59:08 by ykarabul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && (s1[i] || s2[i]))
	{
		if (s1[i] != s2[i])
			return ((char)s1[i] - (char)s2[i]);
		i++;
	}
	return (0);
}

// s1 ve s2 dizisini n kadar karşılaştırır ve farklı bi karakter bulursa s1 deki karakterden s2 deki karakterin ascii karşılıklarını çıkartarak return eder

/*
#include <stdio.h>
int main()
{
	char *s1 = "42 Kocaeli";
	char *s2 = "42 kocaeli";
	printf("%d",ft_strncmp(s1,s2,4));
}
*/
