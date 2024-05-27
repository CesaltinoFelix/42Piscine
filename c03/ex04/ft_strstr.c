/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cefelix <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 11:10:44 by cefelix           #+#    #+#             */
/*   Updated: 2024/01/23 11:56:46 by cefelix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	char	*copia_str;

	copia_str = str;
	if (*to_find == '\0')
		return (str);
	while (*copia_str)
	{
		i = 0;
		if (*copia_str == to_find[0])
		{
			while (copia_str[i] == to_find[i] && to_find[i])
				i++;
			if (to_find[i] == '\0')
				return (copia_str);
		}
		copia_str++;
	}
	return (0);
}
