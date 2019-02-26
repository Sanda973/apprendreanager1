/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgury <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/26 19:01:50 by sgury             #+#    #+#             */
/*   Updated: 2019/02/26 19:37:08 by sgury            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_is_sort(int *tab, int length, int (*f)(int, int));

int ft_ultimate_range(int min, int max)
{
	return (min - max);
}

int	main()
{
	int tab[] = {8, 5, 3, -45};

	return (ft_is_sort(tab, 4, &ft_ultimate_range));
}
