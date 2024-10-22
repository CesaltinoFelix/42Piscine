/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cefelix <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 19:40:08 by cefelix           #+#    #+#             */
/*   Updated: 2024/01/19 20:22:35 by cefelix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include<stdio.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_number(int digits[], int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		ft_putchar(digits[i] + '0');
		i++;
	}
	if (digits[0] != 9 - n + 1)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_combn_recursive(int pos, int digits[], int n, int prev)
{
	int	i;

	if (pos == n)
	{
		return ;
	}
	i = prev + 1;
	while (i <= 9)
	{
		digits[pos] = i;
		ft_print_combn_recursive(pos + 1, digits, n, digits[pos]);
		if (pos == n - 1)
		{
			print_number(digits, n);
		}
		i++;
	}
}

void	ft_print_combn(int n)
{
	int	digits[10];

	ft_print_combn_recursive(0, digits, n, -1);
}

int main()
{
	ft_print_combn(3);
}