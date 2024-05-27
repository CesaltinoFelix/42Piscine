/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cabecario_funcoes.h                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cefelix <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 16:56:09 by cefelix           #+#    #+#             */
/*   Updated: 2024/01/28 17:12:04 by cefelix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef CABECARIO_FUNCOES_H
# define CABECARIO_FUNCOES_H

void	ft_putchar(char c);
void	ft_putnbr(int nb);
void	ft_putstr(char *str);
int		ft_strlen(char *str);
int		ft_atoi(char *str);
int		*pegar_numeros(char *str);
int		tabuleiro_eh_valido(int ac, char **av);
int		verificar_num_repetido(int tab[4][4], \
		int posicao, int num);
int		verificar_tabuleiro(int tab[4][4], \
		int posicao, int configuracaoTabuleiro[16]);
void	apresentar_solucao(int tab[4][4]);
int		resolver_tabuleiro(int tab[4][4], \
		int configuracaoTabuleiro[16], int posicao);
#endif
