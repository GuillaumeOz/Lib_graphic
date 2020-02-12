/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_rectangle.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozsertt <gozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/09 13:51:34 by gozsertt          #+#    #+#             */
/*   Updated: 2020/02/12 19:50:26 by gozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ggl.h"

void draw_rectangle(t_vector2 pos, t_vector2 size, t_color color)
{
	draw_rectangle_in_image(g_app->image, pos, size, color);
}

void draw_rectangle_in_image(t_image *image, t_vector2 pos, t_vector2 size, t_color color)
{
	size_t i;
	size_t j;

	i = 0;
	while (i < size.x)
	{
		j = 0;
		while (j < size.y)
		{
			put_pixel(image, i + pos.x, j + pos.y, color);
			j++;
		}
		i++;
	}
}
