#include <string.h>
#include <stdio.h>

void	ft_bzero(void *block, unsigned int size)
{
	char	*ptr;
	unsigned int	i;

	ptr = (char *)block;
	i = 0;
	while (i < size)
	{
		ptr[i] = '\0';
		i++;
	}

}

int main(void)
{	
	
	char	cptr[20];
	char	tptr[20];
	unsigned int	x = 10;
	unsigned int	i = 0;
	ft_bzero(cptr, x);
	printf("my bzero test \n");
	while (i < x)
	{
		printf("element in position %u : %d \n", i, cptr[i]);
		i++;
	}
	i = 0;
	bzero(tptr, x);
	printf("native bzero test \n");
	while (i < x)
	{
		printf("element in position %u : %d \n", i, tptr[i]);
                i++;
	}

}
