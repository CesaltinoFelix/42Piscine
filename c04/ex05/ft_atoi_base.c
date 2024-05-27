/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cefelix <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 13:19:15 by cefelix           #+#    #+#             */
/*   Updated: 2024/01/28 13:31:39 by cefelix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>
int	check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		j = i + 1;
		if (base[i] == '+' || base[i] == '-' || base[i] == ' ')
			return (0);
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	if (i < 2)
		return (0);
	return (i);
}

int	index_of_base(unsigned char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (0);
}

int	ft_atoi_base(char *str, char *base)
{
	int	sign;
	int	i;
	int	base_len;
	int	num;

	num = 0;
	base_len = check_base(base);
	sign = 0;
	if (!base_len)
		return (0);
	while ((*str == '\t' || *str == '\v' || *str == '\f' || *str == '\n' || \
			*str == '\r' || *str == ' ') && *str)
		str++;
	while ((*str == '+' || *str == '-') && *str)
	{
		if (*str++ == '-')
			sign++;
	}
	i = -1;
	while (str[++i] >= base[0] && str[i] <= base[base_len - 1] && str[i])
		num = (num * base_len) + (index_of_base(str[i], base));
	if (sign % 2 == 1)
		num = (num) * (-1);
	return (num);
}

int main()
{
	printf("%d\n",  ft_atoi_base("2A", "0123456789ABCDEF"));
}