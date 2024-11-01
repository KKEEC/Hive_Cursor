void*	ft_memset (void *block, int c, unsigned int size)
{
	unsigned char	*cptr;
	unsigned char	key;
	unsigned int	i;

	cptr = (unsigned char *)block;
	key = (unsigned char)c;
	i = 0;
	while (i < size)
	{
		cptr[i] =  key;
		i++;
	}
	return (block);
}
