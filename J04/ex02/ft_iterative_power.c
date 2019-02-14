/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgury <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/11 15:32:35 by sgury             #+#    #+#             */
/*   Updated: 2019/02/11 17:43:31 by sgury            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	resultat;

	resultat = nb;
	if (power == 0)
		return (1);
	power--;
	while (power > 0)
	{
		resultat = resultat * nb;
		power--;
	}
	if (power < 0)
		return (0);
	return (resultat);
}
