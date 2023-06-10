/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_purchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykarabul <@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 02:58:59 by ykarabul          #+#    #+#             */
/*   Updated: 2022/12/18 02:58:59 by ykarabul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

// Verilen c karakterini oluşturulan fd yolundaki dosyaya yazar.
// Write ın ilk parametresi 0 ise stdin, 1 ise stdout, 2 ise stderr
// bizim oluşturduğumuz fd yolu 3 ten başlar
// O_CREAT dosya yoksa oluşturur - O_RDWR okuma ve yazma izni verir bunu O_RDONLY  O_WRONLY olarakta verebiliriz
// open fonksiyonunun son parametresinde iste chmod izinlerini veriyoruz
// ilk parametreyi örnekteki gibi verirsek bulunduğu dizinde açar dosyayı
// open("/Users/ykarabul/Desktop/fak.txt",O_WRONLY,7777) şeklinde de dosya yolunu verebiliriz

/*
#include <fcntl.h>
int main()
{
	int fd = open("fak.txt", O_CREAT | O_RDWR, 7777);
	ft_putchar_fd('A',fd);
}
*/
