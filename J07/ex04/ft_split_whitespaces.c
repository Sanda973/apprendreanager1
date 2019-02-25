/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgury <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/20 13:58:39 by sgury             #+#    #+#             */
/*   Updated: 2019/02/23 12:48:49 by sgury            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_countwords(char *str)
{
	int		nbwords;
	int		i;

	i = 0;
	nbwords = 0;
	while (str[i] != '\0')
	{
		if (str[i] != ' ' || str[i] != '\n' || str[i] != '\t')
		{
			i++;
			if (str[i + 1] == ' ' || str[i + 1] == '\n'
					|| str[i + 1] == '\t' || str[i + 1] == '\0')
			{
				nbwords++;
				i++;
			}
		}
		while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
			i++;
	}
	return (nbwords);
}

int		ft_wordsize(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0' && str[i] != '\t'
			&& str[i] != '\n' && str[i] != ' ')
		i++;
	return (i);
}

char	**ft_str_in_tab(char *str, char **tab)
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
		while (*str != ' ' && *str != '\n' && *str != '\t' && *str != '\0')
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
	return (ft_str_in_tab(str, tab));
}
