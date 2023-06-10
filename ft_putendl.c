/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykarabul <@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 03:06:31 by ykarabul          #+#    #+#             */
/*   Updated: 2022/12/18 03:06:31 by ykarabul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	write(fd, "\n", 1);
}

// Girilen *s dizisini fd yoluna yazar ve bir alt satıra geçer

/*
#include <fcntl.h>
int main()
{
	int fd = open("fak.txt", O_CREAT | O_RDWR, 7777);
	char *str = "42 Koceali";
	ft_putendl_fd(str,fd);
}
*/
