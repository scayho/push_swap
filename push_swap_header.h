/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_header.h                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelahce <abelahce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 14:23:40 by abelahce          #+#    #+#             */
/*   Updated: 2022/06/05 21:45:39 by abelahce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_HEADER_H
# define PUSH_SWAP_HEADER_H

# include "push_swap_header.h"
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <stddef.h>

typedef struct s_tack
{
	int	*table;
	int	*tableb;
	int	*fake_table;
	int	totala;
	int	totalb;
	int	var1;
	int	var2;
	int	start;
	int	first;
	int	i;
}t_stack;

void	push_swap(char **taba);
char	**ft_split(char const *s, char c);
int		ft_atoi(const char *str);
int		ft_putchar(char c);
int		ft_putstr(char	*str);
int		ft_putnbr(int n);
void	function_error(void);
char	*ft_strjoin(char const *s1, char const *s2);
int		ft_strlen(char	*str);
char	**gather_argument(char **stack_a, int number_argument);
int		ft_tablen(char **table);
int		*parsing_input(int arc, char **arv, t_stack	*stack_a);
int		start_sort(t_stack	*stack_a);
int		check_already_sorted(t_stack *stack_a);
int		ft_intlen(int *table);
void	sort2(t_stack *stack);
void	sort3(t_stack *stack);
void	ra(t_stack *stack, int k);
void	sb(t_stack *stack, int k);
void	ss(t_stack *stack);
void	pb(t_stack *stack, int h);
void	rra(t_stack *stack, int k);
void	rrb(t_stack *stack, int k);
void	rrr(t_stack *stack);
void	rb(t_stack *stack, int k);
void	rb(t_stack *stack, int k);
void	rr(t_stack *stack);
void	pa(t_stack *stack, int k);
void	sa(t_stack *stack, int k);
void	sort5(t_stack	*stack);
int		searchthelow(t_stack *stack);
void	checkspacearg(char	*str);
void	sort_it(t_stack *stack);
void	returntoa(t_stack *stack);
void	the_counting(t_stack *stack);
void	chofa(t_stack *stack, int index, int place);
void	checkina(t_stack *stack);
void	ft_free(t_stack	*stack_a);
int		startrecall(t_stack *stack);
void	recalled(t_stack *stack, int recall);
void	lookinghome(t_stack *stack, int recall);
void	check_arraving(t_stack *stack);
void	preparea(t_stack *stack, int stand);
int		checkafter(t_stack *stack, int recall);
void	sort_it(t_stack	*stack);
void	the_start(t_stack	*stack);
void	the_sort(t_stack	*stack);
void	conv_error(int i, int j, char *str);
void	free_table(char **argument_table);
void	sort_fake_table(t_stack *stack);
void	from_ato_b_2(t_stack *stack, int lastv2, int p1);
void	prepare_str(t_stack *stack, int libre);
char	*get_next_line(int fd);
char	*concate_str(char *result, char *s1, char *s2);
char	*cpy_line(char *line, char *str, int i);
int		ft_strcmp(char *s1, char *s2);
char	*ft_strdup(const char *s1);
void	*ft_calloc(size_t count, size_t size);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	ft_bzero(void *s, size_t n);
void	rush_500(t_stack *stack);
void	rush_500_2(t_stack *stack, int lastv2, int p1);

#endif
