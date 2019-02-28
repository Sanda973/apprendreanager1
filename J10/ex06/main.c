/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgury <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/27 16:05:33 by sgury             #+#    #+#             */
/*   Updated: 2019/02/27 21:08:53 by sgury            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "usefull.h"

char	ft_valid_operateur(char *str)
{
	char	operateur;

	if (ft_strlen(str) == 1)
	{
		if (str[0] == '+' || str[0] == '-' || str[0] == '*'
				|| str[0] == '/' || str[0] == '%')
			return (operateur = str[0]);
	}
	return (0);
}

int		ft_do_op(int valeur1, int valeur2, char operateur)
{
	int		result;

	result = 0;
	if (operateur == '+')
		result = valeur1 + valeur2;
	if (operateur == '-')
		result = valeur1 - valeur2;
	if (operateur == '*')
		result = valeur1 * valeur2;
	if (operateur == '/')
		result = valeur1 / valeur2;
	if (operateur == '%')
		result = valeur1 % valeur2;
	return (result);
}

int		main(int ac, char **av)
{
	int		valeur1;
	int		valeur2;
	int		result;
	char	operateur;

	result = 0;
	if (ac - 1 != 3)
		return (0);
	operateur = ft_valid_operateur(av[2]);
	valeur1 = ft_atoi(av[1]);
	valeur2 = ft_atoi(av[3]);
	if (operateur == '/' && valeur2 == 0)
	{
		ft_putstr("Stop : division by zero\n");
		return (0);
	}
	if (operateur == '%' && valeur2 == 0)
	{
		ft_putstr("Stop : modulo by zero\n");
		return (0);
	}
	result = ft_do_op(valeur1, valeur2, operateur);
	ft_putnbr(result);
	ft_putchar('\n');
	return (0);
}
