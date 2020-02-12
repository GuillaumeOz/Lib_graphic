/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   application.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozsertt <gozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/28 12:07:29 by gozsertt          #+#    #+#             */
/*   Updated: 2020/02/12 21:08:53 by gozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ggl.h"

void start_application(int size_x, int size_y, char *title)
{
	g_app = (t_application*)malloc(sizeof(t_application));
	if (g_app == NULL)
		perror("Error\n The application can't be malloc");
	g_app->mlx_ptr = mlx_init();
	g_app->size = create_vector2(size_x, size_y);
	g_app->win_ptr = mlx_new_window(g_app->mlx_ptr, g_app->size.x, g_app->size.y, title);
	g_app->image = NULL;
}

void close_application() // call by the ESC KEY
{
	free_image(g_app->image);
	mlx_destroy_window(g_app->mlx_ptr, g_app->win_ptr);
	free(g_app);
	write(1, "The application has been closed", 32);
	exit(0);
}

void		clear_application(t_color color)
{
	size_t i;
	size_t j;

	i = 0;
	while (i < (size_t)g_app->size.x)
	{
		j = 0;
		while (j < (size_t)g_app->size.y)
		{
			put_pixel(g_app->image, i, j, color);
			j++;
		}
		i++;
	}
}

void application_create_content()
{
	g_app->image = malloc_image(g_app->size.x, g_app->size.y);
}

void render_application()
{
	mlx_put_image_to_window(g_app->mlx_ptr, g_app->win_ptr, g_app->image->img_ptr, 0, 0);
}

int run_application()
{
	mlx_loop(g_app->mlx_ptr);
	return (0);
}
