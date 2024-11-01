#include <string.h>
#include <stdio.h>

void*	ft_memset (void *block, int c, size_t size)
{
	char *	cptr;
	cptr = (char *)block;
	
	while (size > 0)
	{
		cptr[size - 1] =  c;
		size--;
	}
	return (block);
}

int main(void)
{
	char ft_str[];
	char str[];

	ft_memset(ft_str, 'y', 2);
	memset(str, 'y', 2);

	printf("return value of my ft_memset func: %c %c %c %c \n", ft_str[0], ft_str[1], ft_str[2], ft_str[3]);
	printf("return value of memset: %c %c %c %c \n", str[0] , str[1], str[2], str[3]);
	return (0);
}
