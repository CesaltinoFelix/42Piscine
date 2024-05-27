/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsebast <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 13:50:04 by chsebast          #+#    #+#             */
/*   Updated: 2024/02/04 13:50:05 by chsebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/bsq.h"

static void	print_bsq(t_data *d)
{
	(void)!write(1, &d->map[d->n], d->nbr_lines * (d->len_lines + 1));
}

static void	print_debug(t_data *d, unsigned short **matrix)
{
	unsigned int	x;
	unsigned int	y;
	char			k;

	write(1, "\n", 1);
	y = 0;
	while (y < d->nbr_lines)
	{
		x = 0;
		while (x < d->len_lines)
		{
			k = matrix[y][x];
			write(1, &k, 1);
			x++;
		}
		y++;
		write(1, "\n", 1);
	}
}

static void	paint_bsq(t_data *d, unsigned short **matrix)
{
	unsigned int	x;
	unsigned int	y;
	unsigned int	top_left_x;
	unsigned int	top_left_y;

	top_left_x = d->bsq_x - matrix[d->bsq_y][d->bsq_x] + 1;
	top_left_y = d->bsq_y - matrix[d->bsq_y][d->bsq_x] + 1;
	y = 0;
	while (y <= d->nbr_lines)
	{
		x = 0;
		while (x <= d->len_lines)
		{
			if ((y >= top_left_y && y <= d->bsq_y)
				&& (x >= top_left_x && x <= d->bsq_x))
				d->map[(y * (d->len_lines + 1)) + x + d->n] = d->filler;
			x++;
		}
		y++;
	}
}

void	display_bsq(t_data *d, unsigned short **matrix)
{
	paint_bsq(d, matrix);
	print_bsq(d);
	if (DEBUG != 0)
		print_debug(d, matrix);
}
