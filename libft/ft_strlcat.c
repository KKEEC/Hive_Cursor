#include <stdio.h>


static unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while(str[i] != '\0')
	{
		i++;
	}
	return (i);
}
unsigned int	ft_strlcat (char *to, const char *from, unsigned int size)
{
	unsigned int	destl;
	unsigned int	i;

	destl = ft_strlen(to);
	i = 0;
	if (size <= destl)
		return (size + ft_strlen((char*)from));
	while((from[i] != '\0') && (destl + i < size - 1))
	{
		to[destl + i] = from[i];
		i++;
	}
	to[destl + i] = '\0';
	return (destl + ft_strlen((char *)from));
}

int	main(void)
{
	const char *src = "Hello world";
	char dest[16] = "there";
	unsigned int btc = 3;
	ft_strlcat(dest, src, btc);
	printf("%s %d\n", dest, ft_strlcat(dest, src, btc));

}
