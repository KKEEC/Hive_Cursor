#include <ctype.h>
#include <stdio.h>
int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90)
			|| (c >= 65 && c <= 90))
	{
		return(true);
	}
	else
		return(false);

}

int main(void)
{
	
	        printf("%d",ft_isalpha('X'));
		printf("%d", isalpha('X'));
		isalpha('&');

}
