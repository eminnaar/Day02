/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eminnaar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 11:42:21 by eminnaar          #+#    #+#             */
/*   Updated: 2020/07/09 15:08:28 by eminnaar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_--alphabet(void);	

void	ft_print_alphabet(void) 
{
	char	letter;

	letter = 'a';
	while (letter <= 'z') 
		ft_putchar(letter++);
}


