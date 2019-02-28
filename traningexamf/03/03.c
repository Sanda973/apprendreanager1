
#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
}

char	ft_get_char(char *str)
{
	char	n_char;

	if (str[1] == '\0')
	{
		n_char = str[0];
		return (n_char);
	}
	else
	{
		ft_putchar('\n');
		exit (1);
	}
}

int		main(int ac, char **av)
{
	char	*str;
	char	to_replace;
	char	n_char;
	int		i;

	i = 0;
	if (ac != 4)
	{
		ft_putchar('\n');
		return (0);
	}
	str = av[1];
	to_replace = ft_get_char(av[2]);
	n_char = ft_get_char(av[3]);
	while (str[i] != '\0')
	{
		while (str[i] != to_replace && str[i] != '\0')
			i++;
		if (str[i] == to_replace && str[i] != '\0')
		{
			str[i] = n_char;
			i++;
		}
	}
	ft_putstr(str);
	ft_putchar('\n');
	return (0);
}
