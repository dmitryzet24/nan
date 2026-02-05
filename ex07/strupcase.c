#include <stdio.h>
#include <string.h>

char	*ft_strupcase(char *str);

int	main(void)
{
	char	s[] = "dfZ-1d";
	char	res[7];

	printf("%s\n", s);
	ft_strupcase(s);
	printf("%s\n", s);
	return (0);
}	

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{	
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;	
		}
		i++;
	}
	return (str);	
}
