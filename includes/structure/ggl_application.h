/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ggl_application.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozsertt <gozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/28 11:48:07 by gozsertt          #+#    #+#             */
/*   Updated: 2020/02/12 21:11:16 by gozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GGL_APPLICATION_H
# define GGL_APPLICATION_H

typedef struct	s_application
{
	void		*mlx_ptr;
	void		*win_ptr;
	t_vector2	size;
	t_image		*image;
}				t_application;

void			start_application(int size_x, int size_y, char *title);
void			close_application();
void			clear_application(t_color color);
void			application_create_content();
void			render_application();
int				run_application();
#endif