/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgury <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/19 15:41:44 by sgury             #+#    #+#             */
/*   Updated: 2019/02/23 14:55:08 by sgury            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char **argv)
{
	int	i;
	int j;
	int	size;

	i = 1;
	j = 0;
	size = 0;
	while (argv[i] != '\0')
	{
		while (argv[i][j] != '\0')
		{
			size++;
			j++;
		}
		j = 0;
		i++;
	}
	return (size);
}

char	*ft_cat_params(int argc, char **argv, int size)
{
	char	*str;
	int		i;
	int		j;
	int		k;

	i = 1;
	j = 0;
	k = 0;
	if ((str = (char*)malloc(sizeof(char) * (size + 1))) == NULL)
		return (NULL);
	while (i < argc)
	{
		while (argv[i][j] != '\0')
			str[k++] = argv[i][j++];
		if (i + 1 < argc)
			str[k++] = '\n';
		j = 0;
		i++;
	}
	str[k] = '\0';
	return (str);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		size;

	size = 0;
	size = ft_strlen(argv);
	return (ft_cat_params(argc, argv, size));
}
