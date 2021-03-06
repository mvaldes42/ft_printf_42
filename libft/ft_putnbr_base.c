/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvaldes <mvaldes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 10:12:03 by mvaldes           #+#    #+#             */
/*   Updated: 2020/05/01 11:52:27 by mvaldes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_putnbr_base(unsigned long nbr, char *base, int out_arg)
{
	long long	nb;
	long long	size;

	nb = nbr;
	size = 0;
	size = ft_strlen(base);
	if (out_arg > 0)
	{
		if (nb < 0)
		{
			nb = nb * (-1);
			ft_putchar('-');
		}
		if (nb >= size && out_arg-- > 0)
			ft_putnbr_base(nb / size, base, out_arg);
		ft_putchar(base[nb % size]);
	}
}
