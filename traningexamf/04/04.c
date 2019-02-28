
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_is_char_in_str(char c, char **av, int i)
{
	return (0);
}


void	ft_union(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0')
	{
		if (ft_is_char_in_str(s1, s1[i], i) == 0)
			ft_putchar(s1[i]);
		i++;
	}
	while (s2[i] != '\0')
}

#include <stdio.h>
int		main(int ac, char** av)
{
	int		i;
	int		j;

	i = 1;
	j = 0;
	if (ac != 3)
	{
		ft_putchar('\n');
		return (0);
	}
	ft_union(av[1], av[2]);
	ft_putchar('\n');
	return (0);
}
