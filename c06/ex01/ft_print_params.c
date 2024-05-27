/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cefelix <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 18:34:29 by cefelix           #+#    #+#             */
/*   Updated: 2024/01/29 18:34:58 by cefelix          ###   ########.fr       */
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
		while (i < ac)
		{
			k = -1;
			while (av[i][++k] != '\0')
				ft_putchar(av[i][k]);
			ft_putchar('\n');
			i++;
		}
	}
	return (0);
}
