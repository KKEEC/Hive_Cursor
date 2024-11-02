void	ft_bzero(void *block, unsigned int size)
{
	char	*ptr;
	unsigned int	i;

	ptr = (char *)block;
	i = 0;
	while (i < size)
	{
		ptr[i] = '\0';
		i++;
	}

}

