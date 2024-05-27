/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cefelix <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 12:53:39 by cefelix           #+#    #+#             */
/*   Updated: 2024/02/08 12:53:42 by cefelix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	while (i++ < length - 1)
	{
		if (f(*tab, *(tab + 1)) <= 0)
			count++;
		tab++;
	}
	return (count == length - 1);
}
