/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgury <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/25 09:41:40 by sgury             #+#    #+#             */
/*   Updated: 2019/02/26 10:21:17 by sgury            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

int					ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char				*ft_strdup(char *src)
{
	int		i;
	char	*cpy;

	i = 0;
	if ((cpy = (char*)malloc(sizeof(char *) * (ft_strlen(src)) + 1)) == NULL)
		return (NULL);
	while (src[i] != '\0')
	{
		cpy[i] = src[i];
		i++;
	}
	if (src[i] == '\0')
		cpy[i] = src[i];
	return (cpy);
}

struct s_stock_par	*ft_param_to_tab(int ac, char **av)
{
	t_stock_par	*a;
	int			i;

	i = 0;
	if ((a = malloc(sizeof(t_stock_par) * (ac) + 1)) == NULL)
		return (NULL);
	while (i < ac)
	{
		a[i].size_param = ft_strlen(av[i]);
		a[i].str = av[i];
		a[i].copy = ft_strdup(av[i]);
		a[i].tab = ft_split_whitespaces(av[i]);
		i++;
	}
	a[i].str = 0;
	return (a);
}
