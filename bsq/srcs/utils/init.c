/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsebast <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 13:55:44 by chsebast          #+#    #+#             */
/*   Updated: 2024/02/04 13:55:45 by chsebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/bsq.h"

void	init_data(t_data *data)
{
	data->nbr_lines = 0;
	data->len_lines = 0;
	data->bsq_x = 0;
	data->bsq_y = 0;
	data->map = NULL;
}

unsigned short	**init_matrix(t_data *d)
{
	unsigned short	**matrix;
	unsigned int	i;

	matrix = malloc(sizeof(unsigned short *) * d->nbr_lines);
	if (!matrix)
	{
		ft_pser("Error: Malloc failed\n");
		return (NULL);
	}
	i = 0;
	while (i < d->nbr_lines)
	{
		matrix[i] = malloc(sizeof(unsigned short) * d->len_lines);
		if (!matrix[i])
			return (free_matrix_i(matrix, i));
		i++;
	}
	return (matrix);
}
