/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ggl_list2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozsertt <gozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 19:51:02 by gozsertt          #+#    #+#             */
/*   Updated: 2020/05/07 18:12:48 by gozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ggl.h"

void		malloc_list_tab(t_list *list)
{
	void	***tmp;
	size_t	i;

	tmp = list->content;
	list->content = (void ***)malloc(sizeof(void **) * (list->nb_line + 1));
	i = 0;
	while (i < list->nb_line)
	{
		list->content[i] = tmp[i];
		i++;
	}
	list->content[list->nb_line] = (void **)malloc(sizeof(void *) *
															list->push_size);
	if (tmp != NULL)
		free(tmp);
	i = 0;
	while (i < list->push_size)
	{
		list->content[list->nb_line][i] = 0;
		i++;
	}
	list->nb_line++;
	list->max_size += list->push_size;
}

t_vector2	list_calc_index_coord(t_list *list, size_t index)
{
	size_t i;

	if (index > list->size)
		index = list->size - 1;
	i = index / list->push_size;
	return (create_vector2(index - i * list->push_size, i));
}

void		list_push_back(t_list *list, void *to_add)
{
	t_vector2	coord;

	if (list->size >= list->max_size)
		malloc_list_tab(list);
	coord = list_calc_index_coord(list, list->size);
	list->content[(size_t)(coord.y)][(size_t)(coord.x)] = to_add;
	list->size++;
}

void		*list_at(t_list *list, size_t index)
{
	t_vector2 coord;

	coord = list_calc_index_coord(list, index);
	return (list->content[(size_t)(coord.y)][(size_t)(coord.x)]);
}

void		**list_get(t_list *list, size_t index)
{
	t_vector2 coord;

	coord = list_calc_index_coord(list, index);
	return (&(list->content[(size_t)(coord.y)][(size_t)(coord.x)]));
}
