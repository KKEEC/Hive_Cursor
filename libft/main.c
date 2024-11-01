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
	// ft_strchr test
		const char* string = "Hello";
    		int c = 'z';
		int x = 'l';
   		printf("return value my func: %s \n", ft_strchr(string, c));
    		printf("return value inbuilt func: %s \n", strchr(string, c));
		printf("return value my func: %s \n", ft_strchr(string, x));
                printf("return value inbuilt func: %s \n", strchr(string, x));
	// ft_strrchr test
                printf("return value my func: %s \n", ft_strrchr(string, c));
                printf("return value inbuilt func: %s \n", strrchr(string, c));
                printf("return value my func: %s \n", ft_strrchr(string, x));
                printf("return value inbuilt func: %s \n", strrchr(string, x));

	// strncmp test
		char str1[20] = "";
		char str2[20] = "";
		char str3[3] = "";
		unsigned int size = 5;
		unsigned int size1 = 7;

		printf("return value of myfunc: %d \n", ft_strncmp(str1, str2, size));
		printf("return value of strncmp func: %d \n", strncmp(str1, str2, size));
		printf("return value of myfunc: %d \n", ft_strncmp(str1, str2, size1));
                printf("return value of strncmp func: %d \n", strncmp(str1, str2, size1));
		printf("return value of myfunc: %d \n", ft_strncmp(str1, str3, size));
                printf("return value of strncmp func: %d \n", strncmp(str1, str3, size));

	//ft_memset test
                unsigned int s = 10;
                unsigned char ft_str[s];
                unsigned char stri[s];
                unsigned int times = 7;

                ft_memset(ft_str, 'y', times);
                memset(stri, 'y', times);

                printf("Return value of my ft_memset function: ");
                for (unsigned int i = 0; i < times + 1; i++)
                {
                        printf("%c ", ft_str[i]);
                }
                printf("\n");

                printf("Return value of memset: ");
                for (unsigned int i = 0; i < times + 1; i++)
                {
                        printf("%c ", stri[i]);
                }
                printf("\n");

    		return (0);


}

