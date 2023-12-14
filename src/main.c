/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheng <jucheng@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 15:18:36 by jucheng           #+#    #+#             */
/*   Updated: 2023/12/14 15:09:21 by jucheng          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

static int	expose_handle(t_fdf *fdf)
{
	render(fdf);
	return(0);
}

int	main(int ac, char **av)
{
	char	*file;
	t_fdf	*fdf;

	if (ac != 2)
		error(1);
	file = av[1];
	fdf = initial_fdf(file);
	render(fdf);
	mlx_key_hook(fdf->win, &key_handle, fdf);
	mlx_expose_hook(fdf->win, &expose_handle, fdf);
	mlx_loop(fdf->mlx);
}
