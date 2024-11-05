void	*ft_memmove(void *to, const void *from, unsigned int size)
{
	char	*ptrto;
	const char	*ptrfrom;
	unsigned int	i;

	ptrto = (char *)to;
	ptrfrom = (const char *)from;
	i = 0;
	while (i <= size)
	{
		if(i = size)
		{
			ptrto[i - 1] = ptrfrom[i - 1];
		}
		else
		{
			ptrto[i] = ptrfrom[i];
			i++;
		}
	}
	return(to);

}
