#include <stdio.h>
#include <string.h>
void	*ft_memchr (const void *block, int c, unsigned int size)
{
	unsigned char	*ptr;
	unsigned int	i;
	unsigned char	result;
	void	*match;

	ptr = (unsigned char *)block;
	i = 0;
	match = 0;
	result = (unsigned char)c;
	while(i < size)
	{
		if (ptr[i] == result)
		{
			match = &ptr[i];
			break;
		}
		else
			i++;
	}
	return(match);

}

int main(void)
{
	const void *string = "Helloworld";
	int c = 'w';
	unsigned int size = 6;
	unsigned int size1 = 5;

	printf("the return value of my func is: %p \n", ft_memchr(string, c , size));
	printf("the return value of my func is: %p \n", ft_memchr(string, c , size1));
	printf("the return value of memchr func is: %p \n", memchr(string, c , size));
	printf("the return value of memchr func is: %p \n", memchr(string, c , size1));
}
