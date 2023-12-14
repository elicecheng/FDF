/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheng <jucheng@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 14:33:22 by jucheng           #+#    #+#             */
/*   Updated: 2023/12/14 15:12:42 by jucheng          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	error(int exit_num)
{
	if (exit_num == 0)
		ft_putstr_fd("FDF closed. Bye!\n", 1);
	else if (exit_num == 1)
		ft_putstr_fd("Wrong usage. Expected './fdf <file_path>'.\n", 1);
	else if (exit_num == 2)
		ft_putstr_fd("Cannot read file.\n", 1);
	else if (exit_num == 3)
		ft_putstr_fd("Cannot initialize fdf.\n", 1);
	else if (exit_num == 4)
		ft_putstr_fd("Cannot parse map.\n", 1);
	else if (exit_num == 5)
		ft_putstr_fd("Cannot create image.\n", 1);
	else if (exit_num == 6)
		ft_putstr_fd("Cannot initialize camera.\n", 1);
	else if (exit_num == 7)
		ft_putstr_fd("Unable to render.\n", 1);
	else if (exit_num == 8)
		ft_putstr_fd("Unable to initialize color.\n", 1);
	exit(exit_num);

}