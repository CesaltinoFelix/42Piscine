/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cefelix <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 16:50:26 by cefelix           #+#    #+#             */
/*   Updated: 2024/01/28 16:53:56 by cefelix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "cabecario_funcoes.h"

int	main(int ac, char **av)
{
	int	*configuracaotabuleiro;
	int	tab[4][4];
	int	i;
	int	j;

	if (tabuleiro_eh_valido(ac, av) == 1)
	{
		ft_putstr("Error\n");
		return (0);
	}	
	i = 0;
	while (i < 4)
	{	
		j = 0;
		while (j < 4)
			tab[i][j++] = 0;
		i++;
	}
	configuracaotabuleiro = pegar_numeros(av[1]);
	if (resolver_tabuleiro(tab, configuracaotabuleiro, 0) == 1)
		apresentar_solucao(tab);
	else
		ft_putstr("Error\n");
	return (0);
}
