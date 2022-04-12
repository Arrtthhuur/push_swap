/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   stack_print.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/05 14:58:44 by abeznik       #+#    #+#                 */
/*   Updated: 2022/04/12 15:37:12 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

#include <stdio.h>

void	stack_print(t_stack *a, char stack)
{
	while (a->next != NULL)
	{
		printf("%d\n", a->value);
		a = a->next;
	}
	printf("%d", a->value);
	printf("\n-\n%c\n\n", stack);
}
