/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ggl_color.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozsertt <gozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/30 12:24:52 by gozsertt          #+#    #+#             */
/*   Updated: 2020/02/09 13:43:48 by gozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GGL_COLOR_H
# define GGL_COLOR_H

typedef unsigned char t_uchar;

typedef struct	s_color
{
	t_uchar	b;
	t_uchar	g;
	t_uchar	r;
	t_uchar	t;
}				t_color;

t_color		*malloc_color(t_uchar b, t_uchar g, t_uchar r, t_uchar t);
t_color		create_color(t_uchar b, t_uchar g, t_uchar r, t_uchar t);
void		destroy_color(t_color to_destroy);
void		free_color(t_color *to_free);
int			convert_color(t_color color);

//create a fuze color function for alpha
#endif