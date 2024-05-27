/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   apresentar_solucao.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cefelix <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 16:49:55 by cefelix           #+#    #+#             */
/*   Updated: 2024/01/28 16:50:00 by cefelix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "cabecario_funcoes.h"

void	apresentar_solucao(int tab[4][4])
{
	int	i;
	int	j;

	i = -1;
	while (++i < 4)
	{
		j = -1;
		while (++j < 4)
		{
			ft_putnbr(tab[i][j]);
			if (j + 1 != 4)
				ft_putchar(' ');
		}
		ft_putchar('\n');
	}
}
