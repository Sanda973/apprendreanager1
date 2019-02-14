/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgury <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 14:58:21 by sgury             #+#    #+#             */
/*   Updated: 2019/02/14 21:12:19 by sgury            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */





char 	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int j;

	i = 0;
	j = 0;
	while (str[i] != to_find[0])
		i++;
	if (str[i] == '\0')
		return (str);
	while (str[i] == to_find[j])
	{
		i++;
		j++;
		if (to_find[i] == '\0')
		{
			return (str);
		}
		return (str + (i - j));
	}
	return (0);
}


#include <string.h>
#include <stdio.h>

int	main()
{
	char	str[] = "Salut";
	char	to_find[] = "lu";

	printf("%s\n", ft_strstr(str, to_find));
	printf("%s\n", strstr(str, to_find));
}
