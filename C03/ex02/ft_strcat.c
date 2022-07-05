#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	a;
	int	i;

	a = 0;
	i = 0;
	while (dest[a] != '\0')
		a++;
	while (src[i] != '\0')
	{
		dest[a] = src[i];
		a++;
		i++;
	}
	dest[a] = '\0';
	return (dest);
}

/*int	main()
{
	char dest[] = "ola ";
	char src[] = "meu amor";

	ft_strcat(dest, src);
	printf("%s\n", dest);
}*/
