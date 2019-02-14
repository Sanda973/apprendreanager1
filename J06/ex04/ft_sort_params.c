/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgury <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/13 14:40:27 by sgury             #+#    #+#             */
/*   Updated: 2019/02/14 14:27:54 by sgury            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

int		ft_print_params(int argc, char *argv[])
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (j < argc)
	{
		while (argv[j][i] != '\0')
		{
			ft_putchar(argv[j][i]);
			i++;
		}
		ft_putchar('\n');
		j++;
		i = 0;
	}
	return (0);
}

int		main(int argc, char *argv[])
{
	int		i;
	char	*t;

	i = 1;
	while (argv[i] != '\0')
	{
		if (ft_strcmp(argv[i - 1], argv[i]) > 0)
		{
			t = argv[i - 1];
			argv[i - 1] = argv[i];
			argv[i] = t;
			i = 1;
		}
		i++;
	}
	ft_print_params(argc, argv);
	return (0);
}
