/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbuczyns <gbuczyns@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 17:54:14 by gbuczyns          #+#    #+#             */
/*   Updated: 2024/05/16 18:10:13 by gbuczyns         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main (int argc, char **argv)
{
	char *stack_a;
	char *stack_b;
	char *result;

	if (argc < 1)
		write(0, "error", 5);
	if (argc == 2)
		stack_a = load_string(argv);
	if (argc > 2)
		stack_a = load_items(argc,argv);
	if (!stack_a)
		write(0, "memory error", 12);
	result = sort_stack(&stack_a, &stack_b);
	ft_printresult(result);
}