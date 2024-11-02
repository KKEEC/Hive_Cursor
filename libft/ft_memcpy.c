void	*ft_memcpy (void *to, const void *from, unsigned int size)
{
	unsigned int	i;
	char	*dest;
	char	*src;

	dest = (char *)to;
	src = (char *)from;

	i = 0;
	while (i < size)
	{
		dest[i] = src[i];
		i++;
	}
	return(to);
}
