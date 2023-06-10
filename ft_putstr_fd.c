/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykarabul <@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 03:02:35 by ykarabul          #+#    #+#             */
/*   Updated: 2022/12/18 03:02:35 by ykarabul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	write(fd, s, ft_strlen(s));
}

// Parametre olarak girilen s dizisini fd nin gösterdiği yola yazar

/*
#include <fcntl.h>
int main()
{
	char *str = "Yiğithan Karabulut";
	int fd = open("fak.txt", O_CREAT | O_RDWR, 7777);
	ft_putstr_fd(str,fd);
}
*/