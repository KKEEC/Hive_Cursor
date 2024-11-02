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


	//ft_bzero test
		char	cptr[20];
		char	tptr[20];
		unsigned int	x1 = 10;
		unsigned int	i = 0;
		ft_bzero(cptr, x1);
		printf("my bzero test \n");
		while (i < x1)
		{
			printf("element in position %u : %d \n", i, cptr[i]);
			i++;
		}
		i = 0;
		bzero(tptr, x1);
		printf("native bzero test \n");
		while (i < x1)
		{
			printf("element in position %u : %d \n", i, tptr[i]);
        	        i++;
		}
	//ft_memchr test
		const void *src = "Helloworld";
		int find = 'w';
		unsigned int findin = 6;
		unsigned int findin1 = 5;

		printf("the return value of my func is: %p \n", ft_memchr(src, find , findin));
		printf("the return value of memchr is: %p \n", memchr(src, find , findin));
		printf("the return value of my func is: %p \n", ft_memchr(src, c , findin1));
		printf("the return value of memchr func is: %p \n", memchr(src, c , findin1));
	
	//ft_memcpy test
		char	tofill[20] = "world";
		char	tofillof[20] = "world";
		const char	*fromfill = "Hello world";
		unsigned int howmany;
		howmany = 5;
		unsigned int check = 0;
		char *myfunc = (char *)ft_memcpy(tofill, fromfill, howmany);
		char *memcp = (char *)memcpy(tofillof, fromfill, howmany);
		printf("myfunc return value: \n" );
		while (check < howmany)
		{
			printf("%dth element: %c \n", check, myfunc[check]);
			check++;
		}
		printf("\n");
		check = 0;
		printf("memcpy func return value : \n");
		while (check < howmany)
		{
		       	printf("%dth element: %c \n",check, memcp[check]);
			check++;
		}
	//ft-memcmp test
		const char	*aa = "";
		const char	*bb = "Hello";
		unsigned int	numtocheck = 6;

		printf("my func returns: %d \n", ft_memcmp(aa, bb, numtocheck));
		printf("native returns: %d \n", memcmp(aa, bb, numtocheck));

	// ft_memmove test
		char cpto[10] = "Hello1";
		char cpto1[10] = "llllllllll";
		const char cpfrom[15] = "Hello world";
		unsigned int btocpy = 11;
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
		char *result1 = (char *)ft_memmove(cpto1, cpfrom, btocpy);
		printf("native memmove func return: \n");
		while(display < btocpy)
		{
			printf("%c",result1[display]);
			display++;
		}
		printf("\n");

	//ft_strlcpy test
		char dest[20] = "Hello";
		const char *src1 = "world! is a fun place";
		unsigned int ui = 6;
		printf("my strlcpy return %d \n", ft_strlcpy(dest, src1, ui));
		printf("Resulting dest: %s\n", dest);

	return (0);
}

