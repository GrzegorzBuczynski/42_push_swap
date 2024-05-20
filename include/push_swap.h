/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbuczyns <gbuczyns@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 17:58:11 by gbuczyns          #+#    #+#             */
/*   Updated: 2024/05/20 18:53:52 by gbuczyns         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stdbool.h>
#include <limits.h>
#include <stdlib.h>
#include "../libft/libft.h"
#include "../libft/ft_printf.h"
#include <unistd.h>


char *load_string(char *argv);
char *load_items(int argc,char **argv);
int ft_printresult(char *result);
char *sort_stack(char **stack_a, char **stack_b);
int	verify_string(char *str);
//push_swap
#endif