/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgury <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/19 08:56:01 by sgury             #+#    #+#             */
/*   Updated: 2019/02/22 12:38:44 by sgury            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*p;
	int i;

	i = 0;
	if (min >= max)
		return (0);
	else
	{
		if ((p = (int*)malloc(sizeof(int) * (max - min + 1))) == NULL)
			return (NULL);
		while (max > min)
		{
			p[i] = min;
			min++;
			i++;
		}
		return (p);
	}
}
