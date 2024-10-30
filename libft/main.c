#include "libft.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void)
{
        //ft_alpha test
                printf("ft_isalpha return value: %d \n", ft_isalpha('A'));
                printf("isalpha return value: %d \n", isalpha('A'));
                printf("ft_isalpha return value: %d \n", ft_isalpha('1'));
                printf("isalpha return value: %d \n", isalpha('1'));
        //ft_digit test
                printf("ft_isdigit return value: %d \n", ft_isdigit('A'));
                printf("isdigit return value: %d \n", isdigit('A'));
                printf("ft_isdigit return value: %d \n", ft_isdigit('1'));
                printf("isdigit return value: %d \n", isdigit('1'));
        //ft_isalnum test
                printf("ft_isalnum return value: %d \n", ft_isalnum('A'));
                printf("isalnum return value: %d \n", isalnum('A'));
                printf("ft_isalnum return value: %d \n", ft_isalnum('&'));
                printf("isalnum return value: %d \n", isalnum('&'));
        //ft_isascii test
                printf("ft_isascii return value: %d \n", ft_isascii('\n'));
                printf("isascii return value: %d \n", isascii('\n'));
                printf("ft_isascii return value: %d \n", ft_isascii(128));
                printf("isascii return value: %d \n", isascii(128));
        //ft_isprint test
                printf("ft_isprint return value: %d \n", ft_isprint('A'));
                printf("isprint return value: %d \n", isprint('A'));
                printf("ft_isprint return value: %d \n", ft_isprint(128));
                printf("isprint return value: %d \n", isprint(128));
	//ft_strlen test
		const char str[25] = "Hello world!";
		printf("strlen test for Hello world! :%d \n", ft_strlen(str));

	// ft_tolower test
		printf("ft_tolower return value: %c \n", ft_tolower('X'));
		printf("tolower return value: %c \n", tolower('X'));
		printf("ft_tolower return value: %c \n", ft_tolower('o'));
		printf("tolower return value: %c \n", tolower('o'));
	// ft_toupper test
                printf("ft_toupper return value: %c \n", ft_toupper('X'));
                printf("toupper return value: %c \n", toupper('X'));
                printf("ft_toupper return value: %c \n", ft_toupper('a'));
                printf("toupper return value: %c \n", toupper('a'));


}

