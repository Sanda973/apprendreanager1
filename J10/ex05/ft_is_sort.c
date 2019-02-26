/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgury <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/26 18:27:02 by sgury             #+#    #+#             */
/*   Updated: 2019/02/26 19:33:50 by sgury            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;

	i = 1;
	while ((f(tab[i], tab[i - 1])) == 0)
	{
		if (i == length)
			return (1);
		i++;
	}
	if ((f(tab[i], tab[i - 1])) < 0)
		while ((f(tab[i], tab[i - 1])) <= 0)
		{
			if (i == length - 1)
				return (1);
			i++;
		}
	else if ((f(tab[i], tab[i - 1])) > 0)
		while ((f(tab[i], tab[i - 1])) >= 0)
		{
			if (i == length - 1)
				return (1);
			i++;
		}
	return (0);
}
