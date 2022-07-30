/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tthesorting.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelahce <abelahce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 22:09:50 by abelahce          #+#    #+#             */
/*   Updated: 2022/06/05 22:11:02 by abelahce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_header.h"

void	rush_500(t_stack *stack)
{
	int	lastv2;
	int	p1;
	int	ok;

	stack->i = 0;
	ok = 0;
	lastv2 = stack->fake_table[0];
	p1 = (stack->totala / 5);
	free(stack->fake_table);
	rush_500_2(stack, lastv2, p1);
}

void	rush_500_2(t_stack *stack, int lastv2, int p1)
{
	while (stack->totala > 1)
	{
		if (stack->totalb >= 2 && stack->tableb[0] <= stack->var2
			&& stack->tableb[0] >= lastv2)
			rb(stack, 1);
		if (stack->i > p1)
		{
			lastv2 = stack->var1;
			prepare_str(stack, 1);
			p1 = stack->totala / 5;
			stack->var1 = stack->fake_table[p1];
			stack->var2 = stack->fake_table[p1 / 2];
			free(stack->fake_table);
			stack->i = 0;
		}
		if (stack->table[0] <= stack->var1)
		{
			pb(stack, 1);
			stack->i++;
		}
		else
			ra(stack, 1);
	}
}
