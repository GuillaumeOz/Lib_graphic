/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_line.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozsertt <gozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/09 13:52:03 by gozsertt          #+#    #+#             */
/*   Updated: 2020/02/09 13:54:07 by gozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ggl.h"

void	put_pixel(t_config *config, t_application *application, t_vector2 pos, t_color color)
{
	int pixel_index;
	int rel_pixel_index;

	if (pos.x < 0 || pos.x >= config->resolution_size->x || pos.y < 0 ||
		pos.y >= config->resolution_size->y)
		return ;
	pixel_index = pos.x + (pos.y * config->resolution_size->x);
	rel_pixel_index = pixel_index * 4;
	application->pixels[rel_pixel_index + BLUE_COMP] = color.b;
	application->pixels[rel_pixel_index + GREEN_COMP] = color.g;
	application->pixels[rel_pixel_index + RED_COMP] = color.r;
	application->pixels[rel_pixel_index + ALPHA_COMP] = color.t; // call the fuze color function here
}
