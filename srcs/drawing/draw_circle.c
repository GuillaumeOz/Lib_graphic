/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_circle.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozsertt <gozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/09 13:51:12 by gozsertt          #+#    #+#             */
/*   Updated: 2020/02/09 13:56:30 by gozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ggl.h"

void	draw_circle(t_config *config, t_application *application, t_vector2 circle_pos, t_vector4 *rounded)
{
	t_color		circle_color;
	t_vector2	pos;
	int			radius;
	int			i;
	int			j;

	i = -1;
	j = -1;
	radius = 100;
	rounded->x = 0.0;
	circle_color = create_color(100, 100, 100, 255);// apply the fuze for alpha
	pos = create_vector2((circle_pos.x - radius), (circle_pos.y - radius));
	while (++i <= (radius + circle_pos.y))
	{
		pos.y = i;
		while (++j <= (radius + circle_pos.y))
		{
			if (pow(radius, 2) >= (pow(circle_pos.x - pos.x, 2) + pow(circle_pos.y - pos.y, 2)))// The condition for print out of range
			{
				put_pixel(config, application, pos, circle_color);
			}
			pos.x = j;
		}
		j = -1;
	}
}
