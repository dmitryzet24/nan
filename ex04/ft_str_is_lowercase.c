#include <stdio.h>

int ft_str_is_lowercase(char *str);

int	main(void)
{
	char	s[] = "df";

	printf("%s\n", s);
	printf("%d\n", ft_str_is_lowercase(s));
	return (0);
}	

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{	
		if (!(str[i] >= 'a' && str[i] <= 'z'))
		{
			return (0);	
		}
		i++;
	}
	return (1);	
}
