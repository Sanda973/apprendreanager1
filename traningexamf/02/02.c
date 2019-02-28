
#include <unistd.h>

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

int		main(int ac, char **av)
{
	int		i;
	char	*str;

	i = 0;
	str = av[1];
	if (ac < 2)
	{
		ft_putchar('\n');
		return (0);
	}
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'm') || (str[i] >= 'A' && str[i] <= 'M'))
		{
			str[i] = str[i] + 13;
			i++;
		}
		else if ((str[i] >= 'n' && str[i] <= 'z') || (str[i] >= 'N' && str[i] <= 'Z'))
		{
			str[i] = str[i] - 13;
			i++;
		}
		else
			i++;
	}
	ft_putstr(str);
	ft_putchar('\n');
	return (0);
}
