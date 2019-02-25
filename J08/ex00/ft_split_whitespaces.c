/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgury <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/22 14:43:12 by sgury             #+#    #+#             */
/*   Updated: 2019/02/24 11:02:53 by sgury            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_countwords(char *str)
{
	int		nbwords;
	int		i;

	nbwords = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
		{
			i++;
			if (str[i + 1] == ' ' || str[i + 1] == '\t' || str[i + 1] == '\n'
					|| str[i + 1] == '\0')
			{
				nbwords++;
				i++;
			}
		}
		while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			i++;
	}
	return (nbwords);
}

int		ft_wordsize(char *str)
{
	int		size;

	size = 0;
	while (str[size] != ' ' && str[size] != '\n'
			&& str[size] != '\t' && str[size] != '\0')
		size++;
	return (size);
}

char	**ft_str_in_tab(char **tab, char *str)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (*str != '\0')
	{
		while (*str == ' ' || *str == '\t' || *str == '\n')
			str++;
		if ((tab[i] = (char*)malloc(sizeof(char *)
						* (ft_wordsize(str)) + 1)) == NULL)
			return (NULL);
		if (ft_wordsize(str) == 0)
			break ;
		while (*str != ' ' && *str != '\t' && *str != '\n' && *str != '\0')
		{
			tab[i][j++] = *str;
			str++;
		}
		tab[i++][j] = '\0';
		j = 0;
	}
	tab[i] = 0;
	return (tab);
}

char	**ft_split_whitespaces(char *str)
{
	char	**tab;
	int		nbwords;

	nbwords = ft_countwords(str);
	if ((tab = (char**)malloc(sizeof(char *) * (nbwords) + 1)) == NULL)
		return (NULL);
	return (ft_str_in_tab(tab, str));
}
