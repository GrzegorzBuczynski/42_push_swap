/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbuczyns <gbuczyns@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 15:52:17 by gbuczyns          #+#    #+#             */
/*   Updated: 2024/05/12 17:29:18 by gbuczyns         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_unsigned(unsigned int n)
{
	int		count;
	char	*symbols;

	symbols = "0123456789abcdef";
	count = 0;
	if (n < 0)
	{
		write(1, "-", 1);
		return (print_digit(-n, 10) + 1);
	}
	else if (n < 10)
	{
		return (print_char(symbols[n]));
	}
	else
	{
		count = print_digit(n / 10, 10);
		return (count + print_digit(n % 10, 10));
	}
}
