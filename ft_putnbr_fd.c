/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykarabul <@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 03:08:12 by ykarabul          #+#    #+#             */
/*   Updated: 2022/12/18 03:08:12 by ykarabul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	nb;

	nb = n;
	if (nb < 0)
	{
		ft_putchar_fd('-', fd);
		nb = (nb * -1);
	}
	if (nb < 10)
		ft_putchar_fd(nb + 48, fd);
	if (nb > 9)
	{
		ft_putnbr_fd(nb / 10, fd);
		ft_putnbr_fd(nb % 10, fd);
	}
}

// Parametrede verilen sayıyı recursive şeklinde byte byte putchar_fd yle dosya yoluna yazar

/*
#include <fcntl.h>
int main()
{
	int num = -420;
	int fd = open("fak.txt", O_CREAT | O_RDWR, 7777);
	ft_putnbr_fd(num,fd);
}
*/