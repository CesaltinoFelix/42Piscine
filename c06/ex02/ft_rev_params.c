/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cefelix <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 18:38:34 by cefelix           #+#    #+#             */
/*   Updated: 2024/01/29 18:39:29 by cefelix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char letra)
{
	write(1, &letra, 1);
}

int	main(int ac, char *av[])
{
	int	i;
	int	k;

	i = 1;
	if (ac > 1)
	{
		while (ac > 1)
		{
			k = -1;
			while (av[ac - 1][++k] != '\0')
				ft_putchar(av[ac - 1][k]);
			ft_putchar('\n');
			ac--;
		}
	}
	return (0);
}
