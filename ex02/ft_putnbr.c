/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pakucera <pakucera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 05:11:50 by pakucera          #+#    #+#             */
/*   Updated: 2021/09/21 06:43:49 by pakucera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int	nbr;

	nbr = nb;
	if (nb < 0)
	{
		ft_putchar('-');
		nbr = nb * -1;
	}
	if (nb > 9)
	{
		ft_putnbr(nbr / 10);
		ft_putchar(nbr % 10 + 48);
	}
	else
	{
		ft_putchar(nbr + '0');
	}
}

int	main(void)
{
	ft_putnbr(-2147483648);
	printf("\n");
	ft_putnbr(-21);
}