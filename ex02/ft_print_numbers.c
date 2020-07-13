
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eminnaar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 12:27:19 by eminnaar          #+#    #+#             */
/*   Updated: 2020/07/09 12:37:21 by eminnaar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_print_numbers(void);

void	ft_print_numbers(void)
{
	char	number;

	number = '0';
	while (number <= '9')
		ft_putchar(number++);

}

