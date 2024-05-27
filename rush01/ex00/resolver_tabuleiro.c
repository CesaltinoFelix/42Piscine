/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   resolver_tabuleiro.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cefelix <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 16:11:31 by cefelix           #+#    #+#             */
/*   Updated: 2024/01/28 16:14:40 by cefelix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "cabecario_funcoes.h"

int	resolver_tabuleiro(int tab[4][4], \
		int configuracaoTabuleiro[16], int posicao)
{
	int	edificio_candidato;

	if (posicao == 16)
		return (1);
	edificio_candidato = 0;
	while (++edificio_candidato <= 4)
	{
		if (verificar_num_repetido(tab, posicao, edificio_candidato) == 0)
		{
			tab[posicao / 4][posicao % 4] = edificio_candidato;
			if (verificar_tabuleiro(tab, posicao, configuracaoTabuleiro) == 0)
			{
				if (resolver_tabuleiro(tab, \
							configuracaoTabuleiro, posicao + 1) == 1)
					return (1);
			}
			else
				tab[posicao / 4][posicao % 4] = 0;
		}
	}
	return (0);
}
