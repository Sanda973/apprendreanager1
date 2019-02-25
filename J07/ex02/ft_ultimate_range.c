/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgury <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/19 09:52:03 by sgury             #+#    #+#             */
/*   Updated: 2019/02/22 12:47:03 by sgury            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*p;
	int i;

	i = 0;
	if (min >= max)
		return (0);
	else
	{
		if ((p = (int*)malloc(sizeof(int) * (max - min + 1))) == NULL)
			return (0);
		while (max > min)
		{
			p[i] = min;
			min++;
			i++;
		}
	}
	*range = p;
	return (i);
}
