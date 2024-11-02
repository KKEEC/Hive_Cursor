static unsigned int	ft_strlen(const char *str)
{
	unsigned int	i;
	i = 0;
	while(str[i] != '\0')
	{
		i++;	
	}
	return (i);
}

unsigned int	ft_strlcpy (char *to, const char *from, unsigned int size)
{
	unsigned int	j;
	unsigned int	lenfrom;
	
	lenfrom = ft_strlen(from);
	j = 0;
	if (size > 0)
	{
		while (j < size - 1 && from[j] != '\0')
		{
			to[j] = from[j];
			j++;
		}
		to[j] = '\0';
	}
	return(lenfrom);
}
