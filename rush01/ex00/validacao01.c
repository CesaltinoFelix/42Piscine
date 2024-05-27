/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validacao01.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cefelix <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 16:49:33 by cefelix           #+#    #+#             */
/*   Updated: 2024/01/28 16:49:42 by cefelix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "cabecario_funcoes.h"

int	tabuleiro_eh_valido(int ac, char **av)
{
	if (ac != 2)
		return (1);
	if (ft_strlen(av[1]) != 31)
		return (1);
	return (0);
}

int	verificar_num_repetido(int tab[4][4], int posicao, int num)
{
	int	i;

	i = -1;
	while (++i < posicao / 4)
		if (tab[i][posicao % 4] == num)
			return (1);
	i = -1;
	while (++i < posicao % 4)
		if (tab[posicao / 4][i] == num)
			return (1);
	return (0);
}
