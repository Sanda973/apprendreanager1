/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_wordtab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgury <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/27 22:27:01 by sgury             #+#    #+#             */
/*   Updated: 2019/02/28 13:08:29 by sgury            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *str1, char *str2)
{
	while (*str1 == *str2)
	{
		str1++;
		str2++;
		if (*str1 == '\0' && *str2 == '\0')
			return (0);
	}
	return (*str1 - *str2);
}

void	ft_sort_wordtab(char **tab)
{
	int		i;
	char	*tmp;

	i = 1;
	while (tab[i] != '\0')
	{
		if (ft_strcmp(tab[i - 1], tab[i]) > 0)
		{
			tmp = tab[i - 1];
			tab[i - 1] = tab[i];
			tab[i] = tmp;
			i = 0;
		}
		i++;
	}
}
