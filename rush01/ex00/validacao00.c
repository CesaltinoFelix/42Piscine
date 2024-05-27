/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validacao.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cefelix <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 16:36:19 by cefelix           #+#    #+#             */
/*   Updated: 2024/01/28 16:40:27 by cefelix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "cabecario_funcoes.h"

int	verificar_col_cima_baixo(int tab[4][4], \
		int posicao, int configuracaotabuleiro[16])
{
	int	i;
	int	eh_maior;
	int	torres_visiveis;

	i = 0;
	eh_maior = 0;
	torres_visiveis = 0;
	if (posicao / 4 == 3)
	{
		while (i < 4)
		{
			if (tab[i][posicao % 4] > eh_maior)
			{
				eh_maior = tab[i][posicao % 4];
				torres_visiveis++;
			}
			i++;
		}
		if (configuracaotabuleiro[posicao % 4] != torres_visiveis)
			return (1);
	}
	return (0);
}

int	verificar_lin_direita_esquerda(int tab[4][4], \
		int posicao, int configuracaotabuleiro[16])
{
	int	i;
	int	eh_maior;
	int	torres_visiveis;

	i = 4;
	eh_maior = 0;
	torres_visiveis = 0;
	if (posicao % 4 == 3)
	{
		while (--i >= 0)
		{
			if (tab[posicao / 4][i] > eh_maior)
			{
				eh_maior = tab[posicao / 4][i];
				torres_visiveis++;
			}
		}
		if (configuracaotabuleiro[12 + posicao / 4] != torres_visiveis)
			return (1);
	}
	return (0);
}

int	verificar_col_baixo_cima(int tab[4][4], \
		int posicao, int configuracaotabuleiro[16])
{
	int	i;
	int	eh_maior;
	int	torres_visiveis;

	i = 3;
	eh_maior = 0;
	torres_visiveis = 0;
	if (posicao / 4 == 3)
	{
		while (i >= 0)
		{
			if (tab[i][posicao % 4] > eh_maior)
			{
				eh_maior = tab[i][posicao % 4];
				torres_visiveis++;
			}
			i--;
		}
		if (configuracaotabuleiro[4 + posicao % 4] != torres_visiveis)
			return (1);
	}
	return (0);
}

int	verificar_lin_esquerda_direita(int tab[4][4], \
		int posicao, int configuracaotabuleiro[16])
{
	int	i;
	int	eh_maior;
	int	torres_visiveis;

	i = 0;
	eh_maior = 0;
	torres_visiveis = 0;
	if (posicao % 4 == 3)
	{
		while (i < 4)
		{
			if (tab[posicao / 4][i] > eh_maior)
			{
				eh_maior = tab[posicao / 4][i];
				torres_visiveis++;
			}
			i++;
		}
		if (configuracaotabuleiro[8 + posicao / 4] != torres_visiveis)
			return (1);
	}
	return (0);
}

int	verificar_tabuleiro(int tab[4][4], \
		int posicao, int configuracaotabuleiro[16])
{
	if (verificar_lin_esquerda_direita(tab, \
				posicao, configuracaotabuleiro) == 1)
		return (1);
	if (verificar_lin_direita_esquerda(tab, \
				posicao, configuracaotabuleiro) == 1)
		return (1);
	if (verificar_col_baixo_cima(tab, \
				posicao, configuracaotabuleiro) == 1)
		return (1);
	if (verificar_col_cima_baixo(tab, \
				posicao, configuracaotabuleiro) == 1)
		return (1);
	return (0);
}
