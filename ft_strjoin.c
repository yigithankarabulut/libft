/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykarabul <@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 01:15:59 by ykarabul          #+#    #+#             */
/*   Updated: 2022/12/18 01:15:59 by ykarabul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*ptr;

	if (!(s1 || s2))
		return (NULL);
	ptr = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!ptr)
		return (NULL);
	i = 0;
	while (i < ft_strlen(s1))
	{
		ptr[i] = s1[i];
		i++;
	}
	j = 0;
	while (j < ft_strlen(s2))
	{
		ptr[i] = s2[j];
		i++;
		j++;
	}
	ptr[i] = '\0';
	return (ptr);
}

// *s1 ve *s2 dizisini birleştirerek yeni bir dizi oluşturur
// s1 ve s2 nin uzunluğunu topyalıp '\0' içinde +1 ekleyerek ptr ye mallocla yer açıyoruz
// Sonrasında ptr ye önce s1 i kopyalıyoruz sonra kaldığı yerden itibaren s2 yi kopyalıyoruz ve sonuna '\0' atıp return ediyoruz

/*
#include <stdio.h>
int main()
{
	char s1[] = "42 ";
	char s2[] = "Kocaeli";
	printf("%s",ft_strjoin(s1,s2));
}
*/
