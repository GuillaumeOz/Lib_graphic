/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ggl.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozsertt <gozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 21:05:23 by gozsertt          #+#    #+#             */
/*   Updated: 2020/02/20 20:10:11 by gozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GGL_H
# define GGL_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <math.h>

# include "mlx.h"
# include "ggl_vector2.h"
# include "ggl_vector3.h"
# include "ggl_vector4.h"
# include "ggl_image.h"
# include "ggl_mlx_define.h"
# include "ggl_color.h"
# include "ggl_drawing.h"
# include "ggl_math.h"
# include "ggl_application.h"
# include "ggl_list.h"

extern t_application *g_app;

#endif