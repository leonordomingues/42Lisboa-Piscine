#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
	{
		i++;
	}
	return (i);
}

/*int	main()
{
	int	numb;
	char	str[] = "ola 42";
	
	numb = ft_strlen(str);
	printf("o numero de chars de str é: %d\n", numb);
}*/
