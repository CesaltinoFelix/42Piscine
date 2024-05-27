/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cefelix <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 08:53:03 by cefelix           #+#    #+#             */
/*   Updated: 2024/02/04 08:53:07 by cefelix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

void	ft_error(void)
{
	write (2, "Error\n", 6);
}

void	ft_error_dict(void)
{
	write (2, "Dict Error\n", 11);
}

int	passou(char *str)
{
	if (ft_strlen(str) > \
	ft_strlen("9999999999999999999999999999999999999999"))
	{
		ft_error_dict();
		return (1);
	}
	return (0);
}

int	main(int argc, char **argv)
{
	char	*dictpath;
	char	*nbr;

	if (passou(argv[1]))
		return (1);
	if (!ft_check_args(argc, argv, &dictpath, &nbr))
	{
		ft_error();
		return (1);
	}
	if (!ft_check_dict(dictpath))
	{
		free(nbr);
		ft_error_dict();
		return (1);
	}
	if (!ft_init(dictpath, nbr))
	{
		ft_error_dict();
		return (1);
	}
	return (0);
}
