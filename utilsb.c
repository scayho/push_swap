/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilsb.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelahce <abelahce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 23:47:04 by abelahce          #+#    #+#             */
/*   Updated: 2022/06/04 00:09:47 by abelahce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_header.h"

int	ft_tablen(char **table)
{
	int	i;

	i = 0;
	while (table[i] != NULL)
		i++;
	return (i);
}

int	ft_intlen(int *table)
{
	int	i;

	i = 0;
	while (table[i])
		i++;
	return (i);
}

int	check_already_sorted(t_stack	*stack_a)
{
	int	i;

	i = 0;
	while (stack_a->table[i] && stack_a->table[i + 1]
		&& stack_a->totala - 1 > i)
	{
		if (stack_a->table[i] < stack_a->table[i + 1])
			i++;
		else
			return (0);
	}
	return (1);
}

void	checkspacearg(char	*str)
{
	int	i;
	int	space;

	i = 0;
	space = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ' ')
			space++;
		i++;
	}
	if (space == i)
		function_error();
}

int	ft_strcmp(char *s1, char *s2)
{
	size_t	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] && s2[i])
		i++;
	return (((unsigned char) s1[i] - (unsigned char) s2[i]));
}
