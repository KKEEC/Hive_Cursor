#include "libft.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <bsd/string.h>
#include <fcntl.h>

int main(void)
{
        //ft_alpha test
                printf("ft_isalpha return value: %d \n", ft_isalpha('A'));
                printf("isalpha return value: %d \n", isalpha('A'));
                printf("ft_isalpha return value: %d \n", ft_isalpha('3'));
                printf("isalpha return value: %d \n", isalpha('3'));
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
		unsigned int findini6 = 6;
		unsigned int findin5 = 5;

		printf("the return value of my func is: %p \n", ft_memchr(src, find , findin6));
		printf("the return value of memchr is: %p \n", memchr(src, find , findin6));
		printf("the return value of my func is: %p \n", ft_memchr(src, c , findin5));
		printf("the return value of memchr func is: %p \n", memchr(src, c , findin5));
	
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
      		char dest1[20] = "Hello";
	       	const char *sorc = "world! is a fun place";
    	   	size_t ui = 2;
	       	printf("my strlcpy return %u \n", ft_strlcpy(dest, sorc, ui));
 	      	printf("Resulting dest: %s\n", dest);
  //  	   	printf("strlcpy return %u \n", strlcpy(dest1, sorc, ui));
//     	 	printf("Resulting dest: %s\n", dest1);
	

	//strlcat test
		char strdest[20] = "Hello";
		char strdest1[20] = "Hello";
		const char *sourcelcat = "whats your name?";
		size_t tcpy = 5;
		printf("my strlcat return %u and dest string: %s\n", ft_strlcat(strdest, sourcelcat, tcpy), strdest);
		printf("my strlcat return %u and dest string: %s\n", strlcat(strdest1, sourcelcat, tcpy), strdest1);
	
	//ft_atoi test
		const char *mixedstr = "hello-1234";
		const char *teststring = "12345abc-2";
		printf("My ft_atoi returns: %d when  %s is passed\n", ft_atoi(mixedstr), mixedstr);
		printf("My ft_atoi returns: %d when  %s is passed\n", atoi(mixedstr), mixedstr);
		printf("My ft_atoi returns: %d when  %s is passed\n", ft_atoi(teststring), teststring);
                printf("My ft_atoi returns: %d when  %s is passed\n", atoi(teststring), teststring);
	//ft_strnstr test
		printf("ft_strnstr\n Locates a substring in a string and returns a pointer to the first character of match\n");
		const char *largestr = "HEl Lo Live";
		const char *smallstr = "Lo";
		size_t searchlen = 7;
	       printf("my ft_strnstr return %s\n", ft_strnstr(largestr, smallstr, searchlen));
	       printf("Native strnstr return %s\n", strnstr(largestr, smallstr, searchlen));
	//ft_strdup
		printf("ft_strdup\n Duplicates passed string and allocates memory then returns pointer to new string\n");
		const char *duplicatethis = "duplicate this";
		const char *duplicatethat = "";
		
		char *catedstr = ft_strdup(duplicatethis);
		char *catedstr1 = strdup(duplicatethis);
		printf("My ft_strdup returns: %s is when %s is passed\n", ft_strdup(duplicatethis), duplicatethis);
                printf("Native strdup returns: %s is when %s is passed\n", strdup(duplicatethis), duplicatethis);
                printf("My ft_strdup returns: %s when  %s is passed\n", ft_strdup(duplicatethat), duplicatethat);
                printf("My strdup returns: %s when  %s is passed\n", strdup(duplicatethat), duplicatethat);
		free(catedstr);
		free(catedstr1);

	//ft_calloc 
		printf("\nft_calloc\n allocates memory for nmemb elements eaach of size bytes\n and sets it to 0 using memset");
		char *calstr;
		char *mycalstr;
		size_t nmemb = 5;
		size_t size = 6;
		size_t	i = 0;

		calstr = calloc(nmemb, size);
		mycalstr = ft_calloc(nmemb, sie);
		while (i <= size)
		{
			printf("native calloc: %c", calstr);
			i++;
		}
		i = 0;
		while (i <= size)
                {
                        printf("my calloc: %c", calstr);
                        i++;
                }

		free(mycalstr);
		free(calstr);
	//ft_substr
		printf("\n Allocates with malloc and returns substring from string with index starting at start and until size len\n");
		char const *string = "Hello this is the result";
		char const *empty = "";
		char *substr;
		char *emtysrc;

		substr = ft_substr(string, 6, 5);
		emtysrc = ft_substr(string, 0, 5);
		printf("substring from source : %s is : %s \n",string, substr);
		printf("substring from source : %s is : %s \n", empty, emtysrc);

		free(substr);
		free(emtysrc);
	// ft_strjoin
		printf("\n joins two string passed as a parameter and returns a new string with malloc\n");
		char const source1 = "hELLO";
		char const source2 = " WORLD";
		char const mtysrc = "";

		char *results1s2 = ft_strjoin(source1, source2);
		char *resultmty = ft_strjoin(source1, mtysrc);
		printf("%s and %s passed in my function returns: %s", source1, source2, results1s2);
		printf("%s and %s passed in my function returns: %s", source1, mtysrc, resultmty);
		free(results1s2);
		free(resultmty);

	// ft_strtrim 
		printf("ft_strtrim\n string to be trimmed and set of characters are passed:\n removes the set from the beginning and end of string");
		char *newcontainer;
		char const *trimthis = "abcHelloworldabc";
		char const *set = "abc";

		newcontainer = ft_strtrim(trimthis, set);

		printf("\nresult after set is trimmed: %s \n", newcontainer);
		free(newcontainer);
	//ft_itoa
		printf("\n integer to ascii, allocates and returns a string representation of passed integer\n");
		int	minint = ft_itoa(-2147483648);
		printf("when int_min  -2147483648 is passed: %s", ft_itoa(minint));
		int zero = ft_itoa(0);
		printf("when zero  0 is passed: %s", ft_itoa(zero));
		int maxint = ft_itoa(2147483647);
		printf("when max integer value  2147483647 is passed: %s", ft_itoa(maxint));
		free(minint);
		free(zero);
		free(maxint);
	//ft_split
		printf("\n ft_split splits the string into substrings from the delimiter c \n");

		char const	*source = "this@is@a@string@to@split";
		char c = '@';
		char **strings = ft_split(source, c);
		int i = 0;
		while (*strings[i])
		{
			printf("%s \n",strings[i]);
			i++;
			free(string[i]);
		}
		free(strings);
		
	//ft_strmapi
		char assciireducer(unsigned int i, char c)
		{
			i = 1;
			c = c - i;
			return (c);
		}

		printf("\n applies the function f on each character of string passed as args");
		char *string = "HELLO";
		char *resultstrmapi = ft_strmapi(string, char (*asciireducer)(unsigned int, char));
		free(resultstrmapi);
	//ft_striteri
		void	iterate(unsigned int x, char *c)
		{
		}
		printf("\n applies function f on each char os str passed as args\n");
		char *s = "Hello";
		ft_striteri(s, void (*iterate)(unsigned int, char *))	
		
	//ft_putchar_fd
		int fd;
	        fd = open("mytest.txt", O_WRONLY | O_TRUNC | O_CREAT, 777);
       		if (fd == -1)
                	return (1);
         	ft_putchar_fd('x', fd);
		close(fd);

	//ft_putstr_fd
		int
		


	return (0);
}

