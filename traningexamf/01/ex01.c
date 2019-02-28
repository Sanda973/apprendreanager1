
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

int		main(int ac, char**av)
{
	int	i;

	i = 0;
	ac = ac - 1;
	if (ac < 1)
	{
		ft_putchar('\n');
		return (0);
	}

	while (i < ac)
		i++;
	ft_putstr(av[i]);
	ft_putchar('\n');
	return (0);
}
