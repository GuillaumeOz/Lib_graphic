/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ggl_drawing.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozsertt <gozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/09 13:46:39 by gozsertt          #+#    #+#             */
/*   Updated: 2020/02/09 13:51:57 by gozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GGL_DRAWING_H
# define GGL_DRAWING_H

void	draw_rectangle(t_config *config, t_application *application, t_vector square_pos, t_vector4 *rounded);
void	draw_circle(t_config *config, t_application *application, t_vector circle_pos, t_vector4 *rounded);
void	put_pixel(t_config *config, t_application *application, t_vector pos, t_color color)

#endif