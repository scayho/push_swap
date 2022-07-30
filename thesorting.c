/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   thesorting.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelahce <abelahce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 14:41:49 by abelahce          #+#    #+#             */
/*   Updated: 2022/06/05 21:47:57 by abelahce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_header.h"

void	prepare_str(t_stack *stack, int libre)
{
	int	i;

	(void)libre;
	i = 0;
	stack->fake_table = malloc(stack->totala * sizeof(int));
	if (!stack->fake_table)
		exit(0);
	while (i < stack->totala)
	{
		stack->fake_table[i] = stack->table[i];
		i++;
	}
	sort_fake_table(stack);
}

int	thelarge(t_stack *stack)
{
	int	i;
	int	large;
	int	index;

	i = 0;
	index = 0;
	large = stack->tableb[i];
	while (i < stack->totalb)
	{
		if (large < stack->tableb[i])
		{
			large = stack->tableb[i];
			index = i;
		}
		i++;
	}
	return (index);
}

void	from_ato_b(t_stack *stack)
{
	int	lastv2;
	int	p1;
	int	ok;

	stack->i = 0;
	ok = 0;
	lastv2 = stack->fake_table[0];
	p1 = (stack->totala / 3);
	free(stack->fake_table);
	from_ato_b_2(stack, lastv2, p1);
}	

void	back_to_a(t_stack *stack)
{
	int	idmax;
	int	max;

	while (stack->totalb)
	{
		idmax = thelarge(stack);
		max = stack->tableb[idmax];
		if (idmax <= stack->totalb / 2)
		{
			while (idmax-- > 0)
			{
				rb(stack, 1);
			}
		}
		else
		{
			while (idmax++ < stack->totalb)
			{
				rrb(stack, 1);
			}
		}
		if (stack->tableb[0] == max)
			pa(stack, 1);
	}
}

void	the_start(t_stack *stack)
{	
	if (stack->totala < 120)
	{
		prepare_str(stack, 0);
		stack->var1 = stack->fake_table[stack->totala / 3];
		stack->var2 = stack->fake_table[(stack->totala / 3) / 2];
		from_ato_b(stack);
		back_to_a(stack);
	}
	else
	{
		prepare_str(stack, 0);
		stack->var1 = stack->fake_table[stack->totala / 5];
		stack->var2 = stack->fake_table[(stack->totala / 5) / 2];
		rush_500(stack);
		back_to_a(stack);
	}
}
