/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cefelix <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 05:58:27 by cefelix           #+#    #+#             */
/*   Updated: 2024/01/29 17:40:06 by cefelix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	put_number(char num[])
{
	write(1, num, 3);
	if (num[0] != '7' || num[1] != '8' || num[2] != '9')
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	char	num[3];

	num[0] = '0';
	num[1] = '0';
	num[2] = '0';
	while (num[0] <= '7')
	{
		num[1] = num[0] + 1;
		while (num[1] <= '8')
		{
			num[2] = num[1] + 1;
			while (num[2] <= '9')
			{
				put_number(num);
				num[2]++;
			}
			num[2] = '0';
			num[1]++;
		}
		num[2] = '0';
		num[1] = '0';
		num[0]++;
	}
}

int	main()
{
	ft_print_comb();
}
