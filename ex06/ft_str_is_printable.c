#include <stdio.h>

int ft_str_is_printable(char *str);

int	main(void)
{
	char	s[] = "   ";

	printf("%s\n", s);
	printf("%d\n", ft_str_is_printable(s));
	return (0);
}	

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{	
		if (!(str[i] >= ' ' && str[i] <= '~'))
		{
			return (0);	
		}
		i++;
	}
	return (1);	
}
