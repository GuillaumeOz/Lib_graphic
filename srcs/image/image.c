/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   image.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozsertt <gozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 13:16:46 by gozsertt          #+#    #+#             */
/*   Updated: 2020/02/11 11:09:01 by gozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ggl.h"

t_image	create_image(int size_x, int size_y)
{
	t_image result;

	result.size = create_vector2(size_x, size_y);
	result.img_ptr = mlx_new_image(g_app->mlx_ptr, result.size.x,
								result.size.y);
	result.pixels = mlx_get_data_addr(result.img_ptr,
									&(result.bits_per_pixels),
				   					&(result.size_line),
									&(result.endian));
	return (result);
}

t_image	*malloc_image(int size_x, int size_y)
{
	t_image *image;

	if((!(image = (t_image*)malloc(sizeof(t_image)))))
		return (NULL);
	*image = create_image(size_x, size_y);
	return (image);
}

void			destroy_image(t_image to_destroy)
{
	mlx_destroy_image(g_app->mlx_ptr, to_destroy.img_ptr);
}

void			free_image(t_image *to_free)
{
	destroy_image(*to_free);
	free(to_free);
}
