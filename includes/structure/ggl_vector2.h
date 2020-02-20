/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ggl_vector2.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozsertt <gozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/31 14:15:36 by gozsertt          #+#    #+#             */
/*   Updated: 2020/02/20 13:32:24 by gozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GGL_VECTOR2_H
# define GGL_VECTOR2_H

typedef struct	s_vector2
{
	float	x;
	float	y;
}				t_vector2;

t_vector2	*malloc_vector2(float x, float y);
t_vector2	create_vector2(float x, float y);
void		destroy_vector2(t_vector2 to_destroy);
void		free_vector2(t_vector2 *to_free);

#endif