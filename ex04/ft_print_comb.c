/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eminnaar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 15:21:55 by eminnaar          #+#    #+#             */
/*   Updated: 2020/07/09 17:09:43 by eminnaar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_comb(void);

void ft_print_numbers(char a, char b, char c) 
{
	ft_putchar(a);
	ft_putchar(b);
	ft_putchar(c);
	ft_putchar(',');
	ft_putchar(' ');
}

void ft_print_comb(void) 
{
	char a = '0';
	char b = '0';
	char c = '0';

	while (a <= '9')
	{
		while (b <= '9') 
		{
			while (c <= '9')
			{
				if (a < b && b < c)	
				{
					ft_print_numbers(a, b, c);
				}
				c++;
			}
			c = '0';
			b++;
		}
		b = '0';
		a++;
	}
}		
