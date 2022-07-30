/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instractions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelahce <abelahce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 01:04:21 by abelahce          #+#    #+#             */
/*   Updated: 2022/06/03 18:37:42 by abelahce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_header.h"

void	ra(t_stack *stack_a, int k)
{
	int	i;
	int	rev;

	i = 0;
	if (stack_a->totala < 2)
		exit(0);
	rev = stack_a->table[0];
	while (i < stack_a->totala)
	{
		stack_a->table[i] = stack_a->table[i + 1];
		i++;
	}
	stack_a->table[i - 1] = rev;
	if (k == 1)
		ft_putstr("ra\n");
}

void	rb(t_stack *stack_a, int k)
{
	int	i;
	int	rev;

	i = 0;
	if (stack_a->totalb < 2)
		exit(0);
	rev = stack_a->tableb[0];
	while (i < stack_a->totalb)
	{
		stack_a->tableb[i] = stack_a->tableb[i + 1];
		i++;
	}
	stack_a->tableb[i - 1] = rev;
	if (k == 1)
		ft_putstr("rb\n");
}

void	rr(t_stack *stack_a)
{
	ra(stack_a, 0);
	rb(stack_a, 0);
	ft_putstr("rr\n");
}

void	pb(t_stack *stack_a, int k)
{
	int	rev;
	int	o;
	int	j;

	o = 1;
	if (stack_a->totala < 1)
		exit(0);
	stack_a->totalb++;
	j = stack_a->totalb;
	rev = stack_a->table[0];
	while (o < stack_a->totala && stack_a->totala > 1)
	{
		stack_a->table[o - 1] = stack_a->table[o];
		o++;
	}
	while (0 < j)
	{
		stack_a->tableb[j] = stack_a->tableb[j - 1];
		j--;
	}
	stack_a->tableb[j] = rev;
	stack_a->totala--;
	if (k == 1)
		ft_putstr("pb\n");
}

void	sa(t_stack *stack_a, int k)
{
	int	j;

	j = 0;
	if (stack_a->totala < 2)
		exit(0);
	j = stack_a->table[0];
	stack_a->table[0] = stack_a->table[1];
	stack_a->table[1] = j;
	if (k == 1)
		ft_putstr("sa\n");
}
