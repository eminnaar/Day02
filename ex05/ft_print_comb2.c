/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eminnaar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 17:12:04 by eminnaar          #+#    #+#             */
/*   Updated: 2020/07/09 17:30:11 by eminnaar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_comb2(void);

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_print_comb2(void)
{
	char xa='0';
	char ya='0';
	char xb='0';
	char yb='0';

	while (xa <= '9')
	{
		while (ya <= '9')
		{
			while (xb <= '9')
			{
				while (yb <= '9')
				{
					ft_putchar(xa);
					ft_putchar(ya);
					ft_putchar(xb);
					ft_putchar(yb);
					ft_putchar(' ');
					ft_putchar('.');
					yb++;
				}
				xb++;
				yb = '0';
			}
			ya++;
			xb  = '0';
		}
		xa++;
		ya = '0';
	}
}

int		main(void)
{
	ft_print_comb2();
	return (0);
}
