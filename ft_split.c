/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykarabul <@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 01:56:38 by ykarabul          #+#    #+#             */
/*   Updated: 2022/12/18 01:56:38 by ykarabul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	wordcounter(const char *s, char delimiter)
{
	unsigned int	word;

	word = 0;
	while (*s)
	{
		if (*s == delimiter)
			s++;
		else
		{
			while (*s != delimiter && *s)
				s++;
			word++;
		}
	}
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char			**arr;
	unsigned int	j;
	unsigned int	a;

	if (!s)
		return (NULL);
	arr = (char **)ft_calloc(wordcounter(s, c) + 1, sizeof(char *));
	if (!arr)
		return (NULL);
	a = 0;
	while (*s)
	{
		if (*s == c)
			s++;
		else
		{
			j = 0;
			while (*s != c && *s && ++j)
				s++;
			arr[++a - 1] = (char *)ft_calloc(j + 1, sizeof(char));
			ft_strlcpy(arr[a - 1], s - j, j + 1);
		}
	}
	return (arr);
}

// Girilen tek boyutlu char dizisini parametredeki karakterle ayırarak çift boyutlu bi char dizisi yapar
// *s = "42 Kocaeli 42" verip c = ' ' olarak verirsek arr[0] = "42", arr[1] = "Kocaeli", arr[2] = "42" olur
// İlk başta 42.satırda wordcounter fonksiyonunda kaç tane kelimemiz olduğunu bulup o kadar yer açıyoruz
// Sonrasında *s dizisini karakteri bulana kadar ilerletiyorum ve aynı anda ++j ile j yide saydırıyorum
// Karakteri bulunca *s dizisi karakterin olduğu adreste olduğu için strlcpy'e s - j diyerek ilerlediğim kadar geri gidiyorum
// j + 1 dememin sebebi de strlcpy n - 1 kadar kopyalama yaptığı için
// Sonrasinda s = s - j demediğim için s hala karakterin bulunduğu adreste oluyor ve if koşuluna girip karakteri geçiyorum
// Döngü tekrar döndüğünde else koşuluna girerek aynı işlem tekrarlıyorum

/*
#include <stdio.h>
int main()
{
	char **str = ft_split("42 Kocaeli 42",' ');
	int i = 0;
	while(i < 3)
	{
		printf("%s\n",str[i]);
		i++;
	}
}
*/
