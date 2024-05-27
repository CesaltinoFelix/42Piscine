/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cefelix <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 18:24:16 by cefelix           #+#    #+#             */
/*   Updated: 2024/01/29 18:27:07 by cefelix          ###   ########.fr       */
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

	i = -1;
	if (ac > 0)
	{
		while (av[0][++i] != '\0')
			ft_putchar(av[0][i]);
		ft_putchar('\n');
	}
	return (0);
}
