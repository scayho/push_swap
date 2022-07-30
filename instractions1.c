/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instractions1.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelahce <abelahce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 01:04:24 by abelahce          #+#    #+#             */
/*   Updated: 2022/06/03 18:38:01 by abelahce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_header.h"

void	sb(t_stack *stack_a, int k)
{
	int	j;

	if (stack_a->totalb < 2)
		exit(0);
	j = stack_a->tableb[0];
	stack_a->tableb[0] = stack_a->tableb[1];
	stack_a->tableb[1] = j;
	if (k == 1)
		ft_putstr("sb\n");
}

void	ss(t_stack *stack_a)
{
	sb(stack_a, 2);
	sa(stack_a, 2);
	ft_putstr("ss\n");
}

void	pa(t_stack *stack_a, int h)
{
	int	rev;
	int	o;
	int	j;

	o = 0;
	if (stack_a->totalb < 1)
		exit(0);
	stack_a->totala++;
	j = stack_a->totala;
	rev = stack_a->tableb[0];
	o++;
	while (o < stack_a->totalb && stack_a->totalb > 1)
	{
		stack_a->tableb[o - 1] = stack_a->tableb[o];
		o++;
	}
	while (0 < j)
	{
		stack_a->table[j] = stack_a->table[j - 1];
		j--;
	}
	stack_a->table[j] = rev;
	stack_a->totalb--;
	if (h == 1)
		ft_putstr("pa\n");
}

void	rra(t_stack *stack_a, int k)
{
	int	rev;
	int	i;

	i = stack_a->totala - 1;
	rev = stack_a->table[i];
	while (0 < i)
	{
		stack_a->table[i] = stack_a->table[i - 1];
		i--;
	}
	stack_a->table[i] = rev;
	if (k == 1)
		ft_putstr("rra\n");
}

void	rrb(t_stack *stack_a, int k)
{
	int	rev;
	int	i;

	i = stack_a->totalb;
	rev = stack_a->tableb[i - 1];
	while (0 < i)
	{
		stack_a->tableb[i - 1] = stack_a->tableb[i - 2];
		i--;
	}
	stack_a->tableb[i] = rev;
	if (k == 1)
		ft_putstr("rrb\n");
}
