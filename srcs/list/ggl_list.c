/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ggl_list.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozsertt <gozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 13:51:40 by gozsertt          #+#    #+#             */
/*   Updated: 2020/05/07 19:38:30 by gozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ggl.h"

t_list	create_list(size_t p_push_size)
{
	t_list result;

	result.content = NULL;
	result.size = 0;
	result.push_size = p_push_size;
	result.nb_line = 0;
	result.max_size = 0;
	return (result);
}

t_list	*malloc_list(size_t p_push_size)
{
	t_list	*result;

	result = (t_list *)malloc(sizeof(t_list));
	if (result == NULL)
		ggl_error("Error 1\n Can't malloc a t_list");
	*result = create_list(p_push_size);
	return (result);
}

void	destroy_list(t_list to_destroy, t_destroy_funct funct)
{
	size_t i;

	i = 0;
	clear_list(&to_destroy, funct);
	while (i < to_destroy.nb_line)
		free(to_destroy.content[i++]);
	free(to_destroy.content);
}

void	clear_list(t_list *to_clear, t_destroy_funct funct)
{
	size_t i;
	size_t j;

	i = 0;
	while (funct != NULL && i < to_clear->nb_line)
	{
		j = 0;
		while (j < to_clear->push_size)
		{
			funct(to_clear->content[i][j]);
			j++;
		}
		i++;
	}
	to_clear->size = 0;
}

void	free_list(t_list *to_free, t_destroy_funct funct)
{
	destroy_list(*to_free, funct);
	free(to_free);
}
