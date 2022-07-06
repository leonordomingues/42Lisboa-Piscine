int	main()
{
	char	*str;
	int i;

	i = 0;
	if ((str[i] >= 'a' && str[i] <= 'z') 
		||(str[i] >= 'A' && str[i] <= 'Z')
	{
		while (str[i] != '\0')
			write(1, &str[i], 1);
			i++;
	}
	else
		write(1, "\n", 1);
}
