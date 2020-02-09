/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_rectangle.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozsertt <gozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/09 13:51:34 by gozsertt          #+#    #+#             */
/*   Updated: 2020/02/09 13:54:16 by gozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ggl.h"

void	draw_rectangle(t_config *config, t_application *application, t_vector2 square_pos, t_vector4 *rounded)// rebuild this function
{
	t_color		rectangle_color;
	t_vector2	pos;
	int			i;
	int			j;

	i = -1;
	j = -1;
	rectangle_color = create_color(0, 0, 0, 0);
	pos = create_vector2(0.0, 0.0);
	while (++i <= rounded->y)
	{
		pos.y = i + square_pos.y;
		while (++j <= rounded->x)
		{
			pos.x = j + square_pos.x;
			put_pixel(config, application, pos, rectangle_color);
		}
		j = -1;
	}
}
