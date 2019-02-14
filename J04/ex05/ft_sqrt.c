/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgury <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/12 09:51:22 by sgury             #+#    #+#             */
/*   Updated: 2019/02/13 15:29:02 by sgury            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int sqrt;

	sqrt = 1;
	if (nb == 4)
		return (2);
	if (nb == 9)
		return (3);
	while (sqrt <= nb / 4)
	{
		if (nb == sqrt * sqrt)
			return (sqrt);
		sqrt++;
	}
	return (0);
}