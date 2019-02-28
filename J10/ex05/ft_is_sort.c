/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgury <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/26 18:27:02 by sgury             #+#    #+#             */
/*   Updated: 2019/02/27 19:37:15 by sgury            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	croissant;
	int decroissant;
	int	i;

	croissant = 1;
	decroissant = 1;
	i = 0;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) > 0)
			croissant = 0;
		if (f(tab[i], tab[i + 1]) < 0)
			decroissant = 0;
		i++;
	}
	return (croissant || decroissant);
}
