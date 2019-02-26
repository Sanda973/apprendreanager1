/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgury <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/26 18:00:44 by sgury             #+#    #+#             */
/*   Updated: 2019/02/26 18:13:35 by sgury            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;

	i = 0;
	if ((tab = (int *)malloc(sizeof(int*) * (length))) == NULL)
		return (NULL);
	while (i < length)
	{
		(f(tab[i]));
		i++;
	}
	return (tab);
}
