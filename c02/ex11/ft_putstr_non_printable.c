/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cefelix <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 03:59:57 by cefelix           #+#    #+#             */
/*   Updated: 2024/01/21 04:00:37 by cefelix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include<stdio.h>
void	ft_putchar(char c)
{
	//write(1, &c, 1);
}

void	ft_dec_to_hex(unsigned char n)
{
	char	*base;

	base = "0123456789abcdef";
	printf("n: %d, divisao: %d\n", n, (n / 16) );
	printf("n: %d, resto: %d", n, (n % 16) );
	ft_putchar(base[n / 16]);
	ft_putchar(base[n % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] == 127)
		{
			ft_putchar('\\');
			ft_dec_to_hex(str[i]);
		}
		else
			ft_putchar(str[i]);
		i++;
	}
}

int	main()
{
	char a[] = "ola \ncelson";
	ft_putstr_non_printable(a);
}

