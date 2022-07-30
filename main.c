/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelahce <abelahce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 14:28:06 by abelahce          #+#    #+#             */
/*   Updated: 2022/06/03 18:53:09 by abelahce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_header.h"
#include <stdio.h>

void	ft_free(t_stack	*stack_a)
{
	free(stack_a->table);
	free(stack_a->tableb);
	free(stack_a);
}

int	main(int arc, char **arv)
{
	t_stack	*stack_a;
	int		i;

	i = 0;
	if (arc < 2)
		return (0);
	stack_a = malloc(sizeof(t_stack));
	if (!stack_a)
		return (0);
	parsing_input(arc, arv, stack_a);
	stack_a->totalb = 0;
	start_sort(stack_a);
	ft_free(stack_a);
	return (0);
}
	// system("leaks push_swap");
