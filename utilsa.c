/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilsa.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelahce <abelahce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 23:46:49 by abelahce          #+#    #+#             */
/*   Updated: 2022/07/30 19:08:51 by abelahce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_header.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	int		i;
	int		j;

	j = 0;
	i = 0;
	result = malloc((ft_strlen((char *)s1) + ft_strlen((char *)s2))
			* sizeof(char) + 1);
	if (!result)
		return (0);
	while (s1[i] != '\0')
	{
		result[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		result[i] = s2[j];
		i++;
		j++;
	}
	result[i] = '\0';
	free((char *)s1);
	return (result);
}

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putnbr(int n)
{
	int			i;
	long long	nb;

	i = 0;
	nb = n;
	if (n < 0)
	{
		i += ft_putchar('-');
		nb = nb * -1;
	}
	if (nb > 9)
	{
		i += (nb / 10);
		i += (nb % 10);
	}
	else
		i += ft_putchar(nb + 48);
	return (i);
}

int	ft_putstr(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (i < ft_strlen(str))
	{
		ft_putchar(str[i]);
		i++;
	}
	return (0);
}

char	**gather_argument(char **stack_a, int number_argument)
{
	char	*gather_string;
	char	**separat_string;
	int		i;

	i = 0;
	(void)number_argument;
	gather_string = "\0";
	gather_string = malloc (1);
	if (!gather_string)
		exit(0);
	while (stack_a[i + 1] != 0)
	{
		if (ft_strlen(stack_a[i + 1]) == 0)
			function_error();
		checkspacearg(stack_a[i + 1]);
		gather_string = ft_strjoin(gather_string, stack_a[i + 1]);
		gather_string = ft_strjoin(gather_string, " ");
		i++;
	}
	separat_string = ft_split(gather_string, 32);
	return (separat_string);
}
