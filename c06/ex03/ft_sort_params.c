/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cefelix <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 19:22:24 by cefelix           #+#    #+#             */
/*   Updated: 2024/01/29 19:23:17 by cefelix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strcmp(char *string1, char *string2)
{
	int	i;

	i = 0;
	while (string1[i] && string2[i])
	{
		if (string1[i] != string2[i])
			return (string1[i] - string2[i]);
		i++;
	}
	if ((string1[i] == '\0' && string2[i] != '\0') || \
		(string1[i] != '\0' && string2[i] == '\0'))
		return (string1[i] - string2[i]);
	return (0);
}

void	ft_swap(char *argumento[], int index, int min)
{
	char	*temp;

	temp = argumento[index];
	argumento[index] = argumento[min];
	argumento[min] = temp;
}

void	ft_sort(char *argumento[], int size)
{
	int		i;
	int		j;
	int		min;

	i = 1;
	while (i < size - 1)
	{
		j = i + 1;
		min = i;
		while (j < size)
		{
			if (ft_strcmp(argumento[min], argumento[j]) > 0)
				min = j;
			j++;
		}
		if (ft_strcmp(argumento[i], argumento[min]) >= 0)
			ft_swap(argumento, i, min);
		i++;
	}
}

int	main(int parametros, char *argumentos[])
{
	int	i;
	int	k;

	i = 1;
	if (parametros > 1)
	{
		ft_sort(argumentos, parametros);
		while (i < parametros)
		{
			k = -1;
			while (argumentos[i][++k] != '\0')
				ft_putchar(argumentos[i][k]);
			ft_putchar('\n');
			i++;
		}
	}
	return (0);
}
