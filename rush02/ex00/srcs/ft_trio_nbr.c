/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_trio_nbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cefelix <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 08:52:52 by cefelix           #+#    #+#             */
/*   Updated: 2024/02/04 08:52:55 by cefelix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

int	ft_trio_nbr_count(char *nb)
{
	int	len;

	len = ft_strlen(nb) / 3;
	if (ft_strlen(nb) % 3 != 0)
		len++;
	return (len);
}

char	**ft_split_trio_nbr(char *nbr, int size)
{
	char	**trio_nbr;
	int		i;
	int		k;
	int		item_len;

	trio_nbr = malloc(sizeof(char *) * (size + 1));
	if (!trio_nbr)
		return (0);
	*trio_nbr = 0;
	item_len = ft_strlen(nbr) % 3;
	i = 0;
	k = 0;
	if (item_len == 0)
		item_len = 3;
	while (nbr[i])
	{
		trio_nbr[k++] = ft_add_word(nbr + i, item_len);
		i += item_len;
		if (item_len != 3)
			item_len = 3;
	}
	trio_nbr[size] = 0;
	return (trio_nbr);
}
