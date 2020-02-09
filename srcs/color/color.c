/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   color.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozsertt <gozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/30 12:38:46 by gozsertt          #+#    #+#             */
/*   Updated: 2020/02/09 13:57:06 by gozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ggl.h"

t_color		*malloc_color(t_uchar b, t_uchar g, t_uchar r, t_uchar t)
{
	t_color	*color;

	color = (t_color*)malloc(sizeof(t_color));
	if (color == NULL)
		return (NULL);
	*color = create_color(b, g, r, t);
	return (color);
}

t_color		create_color(t_uchar b, t_uchar g, t_uchar r, t_uchar t)
{
	t_color	result;

	result.b = b;
	result.g = g;
	result.r = r;
	result.t = t; // create a fuze alpha color here
	return (result);
}

void		destroy_color(t_color to_destroy)
{
	(void)to_destroy;
}

void		free_color(t_color *to_free)
{
	destroy_color(*to_free);
	free(to_free);
}
