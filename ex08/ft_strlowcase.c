#include <stdio.h>

char	*ft_strlowcase(char *str);

int	main(void)
{
	char	s[] = "DfZ-1HI7a";
	char	res[7];

	printf("%s\n", s);
	ft_strlowcase(s);
	printf("%s\n", s);
	return (0);
}	

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{	
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;	
		}
		i++;
	}
	return (str);	
}
