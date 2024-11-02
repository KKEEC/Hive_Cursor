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
