/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahuang <jahuang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 11:01:50 by jahuang           #+#    #+#             */
/*   Updated: 2021/01/15 17:07:58 by jahuang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int printn;

	if (n == -2147483648)
	{
		ft_putchar_fd('-', fd);
		n = -(n / 10);
		ft_putnbr_fd(n, fd);
		ft_putnbr_fd(8, fd);
		return ;
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = -n;
	}
	if ((n / 10) != 0)
	{
		ft_putnbr_fd(n / 10, fd);
	}
	printn = n % 10 + 48;
	ft_putchar_fd(printn, fd);
	return ;
}
