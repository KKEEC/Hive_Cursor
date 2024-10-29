#include<stdio.h>
int	ft_isalpha(int c);
int	ft_isdigit(int c);


void	ft_isalnum(int c)
{
	if(ft_isalpha(c) > 0  || ft_isdigit(c) > 0)
		printf("it is alphanumeric \n");
	else
		printf("not an alphanumeric \n");
}
