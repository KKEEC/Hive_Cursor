#include <ctype.h>
#include <stdio.h>
#include <string.h>

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90)
			|| (c >= 65 && c <= 90))
	{
		return(1024);
	}
	else
		return(0);

}
int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return(2048);
	else
		return(0);
}

int	ft_isalnum(int c)
{
	if(ft_isalpha(c) > 0  || ft_isdigit(c) > 0)
		return(8);
	else
		return(0);
}


int	ft_isascii(int c)
{
	if(c >= 0 && c <= 127)
		return(1);
	else
		return 0;
}

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 127)
		return(16384);
	else
		return(0);

}

int     ft_strlen(const char *s)
{
        int     i;

        i = 0;
        while (s[i] != '\0')
        {
                i++;
        }
        return (i);
}

int    ft_tolower(int c)
{
        if (c >= 'A' && c <= 'Z')
        {
                c = c + 32;
                return (c);
        }
        else
                return (c);
}

char*	ft_strchr(const char *str, int c)
{
	int	i;
	void*	match;

	i = 0;
	match = 0;
	while(str[i] != '\0')
	{
		if (str[i] == c)
		{
			match = (char *)&str[i];
			break;
		}
		else
			i++;
	}
	return ((char *)match);
}

//ft_strchr

static int sft_strlen(const char* string)
{
	int	i;

	i = 0;
	while (string[i] != '\0')
	{
		i++;
	}
	return (i);
}



char*	ft_strrchr(const char *str, int c)
{
	int	j;
	void*	match;

	j = sft_strlen(str) - 1;
	match = 0;
	while (str[j] >= 0)
	{
		if (str[j] == c)
		{
			match = (char *)&str[j];
			break;
		}
		else
			j--;
	}
	return ((char *)match);
}
//ft_strncmp

int     ft_strncmp (const char *s1, const char *s2, unsigned int size)
{
        unsigned int    i;

        i = 0;
        while ((s1[i] || s2[i]) && i < size)
        {
                if(s1[i] == s2[i])
                        i++;
                else
                        return (s1[i] - s2[i]);
        }
        return (0);
}

// ft_memset
void*	ft_memset (void *block, int c, unsigned int size)
{
	unsigned char	*cptr;
	unsigned char	key;
	unsigned int	i;

	cptr = (unsigned char *)block;
	key = (unsigned char)c;
	i = 0;
	while (i < size)
	{
		cptr[i] =  key;
		i++;
	}
	return (block);
}



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
	// ft_strchr test
		const char* string = "Hello";
		int a = 'x';
		int b = 'e';
    		printf("return value my func: %s \n", ft_strchr(string, a));
    		printf("return value inbuilt func: %s \n", strchr(string, a));
		printf("return value my func: %s \n", ft_strchr(string, b));
                printf("return value inbuilt func: %s \n", strchr(string, b));
	// ft_strrchr test
		printf("return value my func: %s \n", ft_strrchr(string, a));
                printf("return value inbuilt func: %s \n", strrchr(string, a));
                printf("return value my func: %s \n", ft_strrchr(string, b));
                printf("return value inbuilt func: %s \n", strrchr(string, b));

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
		for (int i = 0; i < times + 1; i++) 
		{
			printf("%c ", ft_str[i]);
		}
		printf("\n");

		printf("Return value of memset: ");
		for (int i = 0; i < times + 1; i++) 
		{
			printf("%c ", stri[i]);
		}
		printf("\n");
	return (0);
}
