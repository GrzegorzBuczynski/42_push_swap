/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   intial_condition_utils.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbuczyns <gbuczyns@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 19:11:16 by gbuczyns          #+#    #+#             */
/*   Updated: 2024/06/01 19:17:31 by gbuczyns         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int	intial(char **argv, int argc, t_stack_node **a)
{
	char	**modified_argv;

	modified_argv = NULL;
	if (argc == 1 || (argc == 2 && !argv[1][0]))
		return (0);
	else if (argc == 2)
	{
		modified_argv = ft_split(argv[1], ' ');
		if (!modified_argv)
			return (1);
	}
	if (argc == 2)
		init_stack_a(a, modified_argv, argc);
	else
		init_stack_a(a, argv + 1, argc);
	if (argc == 2)
		free_split(modified_argv);
	return (1);
}
