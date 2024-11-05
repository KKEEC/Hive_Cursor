#include <stdlib.h>
#include <stdio.h>
#include <bsd/string.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size > 0)
	{
		while (src[i] && i < (size - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = 0;
	}
	while (src[i])
		i++;
	return (i);
}

int	main(void)
{
	char dest[20] = "Hello";
	char dest1[20] = "Hello";
	const char *src = "world! is a fun place";
	size_t ui = 2;
	printf("my strlcpy return %lu \n", ft_strlcpy(dest, src, ui));
	printf("Resulting dest: %s\n", dest);
	printf("strlcpy return %lu \n", strlcpy(dest1, src, ui));
        printf("Resulting dest: %s\n", dest1);

}

