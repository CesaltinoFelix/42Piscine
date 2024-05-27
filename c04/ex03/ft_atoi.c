/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cefelix <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 13:33:29 by cefelix           #+#    #+#             */
/*   Updated: 2024/01/28 13:35:21 by cefelix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_atoi(char *str)
{
	int	sign;
	int	i;
	int	base;
	int	num;

	num = 0;
	base = 1;
	sign = 0;
	while ((*str == '\t' || *str == '\v' || *str == '\f' || *str == '\n' || \
			*str == '\r' || *str == ' ') && *str)
		str++;
	while ((*str == '+' || *str == '-') && *str)
	{
		if (*str++ == '-')
			sign++;
	}
	i = -1;
	while (str[++i] >= '0' && str[i] <= '9' && str[i])
		num = (num * 10) + (str[i] - '0');
	if (sign % 2 == 1)
		num = (num) * (-1);
	return (num);
}
