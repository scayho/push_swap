/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelahce <abelahce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 20:10:33 by abelahce          #+#    #+#             */
/*   Updated: 2022/06/02 14:50:34 by abelahce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_header.h"

int	start_sort(t_stack	*stack)
{
	if (stack->totala == 2)
		sort2(stack);
	if (stack->totala == 3)
		sort3(stack);
	if (stack->totala <= 5)
		sort5(stack);
	else
		sort_it(stack);
	return (0);
}
