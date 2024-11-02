void	*ft_memmove(void *to, const void *from, unsigned int size)
{
	char	*ptrto;
	char	*ptrfrom;
	unsigned int	i;

	ptrto = (char *)to;
	ptrfrom = (char *)from;
	i = 0;
	while (i < size)
	{
		ptrto[i] = ptrfrom[i];
		i++;
	}
	return(to);

}
