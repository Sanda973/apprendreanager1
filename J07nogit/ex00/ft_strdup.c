/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgury <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/18 17:43:34 by sgury             #+#    #+#             */
/*   Updated: 2019/02/18 19:06:11 by sgury            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char *ft_strdup(char *src)
{
	int 	i;
	int 	j;
	char	*str;

	i = 0;
	j = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	str = (char*)malloc(sizeof(char) * (i + 1));
	while (j < i)
	{
		str[j] = src[j];
		j++;
	}
	return (str);
}


#include <stdio.h>
int		main(int ac, char **av)
{
	char *str;
	(void) ac;
	ft_strdup(str);
	printf("%s\n", str);
	return (0);
}
