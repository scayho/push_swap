/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilsc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelahce <abelahce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 23:46:59 by abelahce          #+#    #+#             */
/*   Updated: 2022/06/05 20:53:20 by abelahce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_header.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	conv_error(int i, int j, char *str)
{
	if (j > 2147483647 || j < -2147483648 || i > 11)
		function_error();
	if (str[i] <= '0' && str[i] >= '9')
		function_error();
}

void	free_table(char **argument_table)
{
	int	i;

	i = 0;
	while (i < ft_tablen(argument_table))
	{
		free(argument_table[i]);
		i++;
	}
	free(argument_table);
}

void	sort_fake_table(t_stack *stack)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	while (i < stack->totala -1)
	{
		j = 0;
		while (j < stack->totala - 1)
		{
			if (stack->fake_table[j] > stack->fake_table[j + 1])
			{
				tmp = stack->fake_table[j];
				stack->fake_table[j] = stack->fake_table[j + 1];
				stack->fake_table[j + 1] = tmp;
			}
			j++;
		}
		i++;
	}
}

void	from_ato_b_2(t_stack *stack, int lastv2, int p1)
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
			p1 = stack->totala / 3;
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
