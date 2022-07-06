#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return(i);
}
int	main()
{
	int nmb;
	char str[]= "olaaa";
	nmb = ft_strlen(str);
	printf("%d\n", nmb);
}
