#include <stdio.h>
#include<string.h>

int	ft_memcmp(const void *a1, const void *a2, unsigned int size)
{
	unsigned char	*s1;
	unsigned char	*s2;
	unsigned int	i;

	s1 = (unsigned char *)a1;
	s2 = (unsigned char *)a2;
	i = 0;
	while( (*s1 || *s2) && i < size - 1)
	{
		if (s1[i] == s2[i])
			i++;
		else
			return((int)s1[i] - (int)s2[i]);
	}
	return (0);
}


int main(void)
{
	const char	*aa = "";
	const char	*bb = "Hello";
	unsigned int	howmany = 6;

	printf("my func returns: %d \n", ft_memcmp(aa, bb, howmany));
	printf("native returns: %d \n", memcmp(aa, bb, howmany));
}
