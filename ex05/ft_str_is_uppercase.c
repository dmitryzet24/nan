int ft_str_is_uppercase(char *str);

#include <stdio.h>

int ft_str_is_uppercase(char *str);

int	main(void)
{
	char	s[] = "dfF";

	printf("%s\n", s);
	printf("%d\n", ft_str_is_uppercase(s));
	return (0);
}

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
