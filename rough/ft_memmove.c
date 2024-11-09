#include <stdio.h>
#include <string.h>
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

int	main(void)
{
	char cpto[10] = "old stuff";
	char cpto1[10] = "old stuff";
	const char cpfrom[15] = "make it dude";
	unsigned int btocpy = 10;
	unsigned int display = 0;

	char *result = (char *)ft_memmove(cpto, cpfrom, btocpy);
	printf("my memmove func return: \n");
	while(display < btocpy)
	{
		printf("%c",result[display]);
		display++;
	}
	printf("\n");
	display = 0;
	char *result1 = (char *)memmove(cpto1, cpfrom, btocpy);
        printf("native memmove func return: \n");
        while(display < btocpy)
        {
                printf("%c",result1[display]);
                display++;
        }
	printf("\n");
	printf("%s \n %s", cpto, cpto1);


}
