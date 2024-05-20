/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbuczyns <gbuczyns@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 17:54:14 by gbuczyns          #+#    #+#             */
/*   Updated: 2024/05/18 18:21:22 by gbuczyns         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "push_swap.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	char	*stack_a;
	char	*stack_b;
	char	*result;

	t_list *node1;
	node1 = malloc(sizeof(t_list));

	node1->content = 10;
	node1->next = NULL;

	if (argc < 2)
		write(2, "Error\n", 6);
	if (argc == 2)
	{
		stack_a = load_string(argv[1]);
		// stack_a = argv[0];
		// stack_b = argv[1];
		printf("%p", stack_a);
		write(2, "Erro2\n", 12);
	}
	// if (argc > 3)
	// stack_a = load_items(argc, argv);
	// if (!stack_a)
	// write(2, "Error\n", 12);
	// result = sort_stack(&stack_a, &stack_b);
	// ft_printresult(result);
	return (0);
}

char	**load_string(char *argv)
{
	char	**result;
	// int		ret;
	
	// if(verify_string(argv))
	// {
	// 	ft_split(argv, ' ');
	// }
	// result = 0;
	return (&result);
}

int	verify_string(char *str)
{
	while (*str)
	{
		if (ft_isdigit(*str) || *str == ' ')
			str++;
		else
			return (0);
	}
	return (1);
}

char	*load_items(int argc, char **argv)
{
	return (0);
}

int	ft_printresult(char *result)
{
	return (0);
}

char	*sort_stack(char **stack_a, char **stack_b)
{
	return (0);
}