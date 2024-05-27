/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cefelix <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 08:52:43 by cefelix           #+#    #+#             */
/*   Updated: 2024/02/04 08:52:45 by cefelix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_free(char **dict, char **tab_nbr, char *nbr, char *zerovalue)
{
	int	i;

	i = 0;
	while (dict[i])
	{
		free(dict[i]);
		i++;
	}
	free(dict);
	i = 0;
	while (tab_nbr[i])
	{
		free(tab_nbr[i]);
		i++;
	}
	free(tab_nbr);
	free(nbr);
	free(zerovalue);
}
