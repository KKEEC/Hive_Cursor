#ifndef MY_HEADER
#define MY_HEADER

int	ft_isalpha(char c);
int	ft_isdigit(int c);
int	ft_isalnum(int c);
int	ft_isascii(int c);
int	ft_isprint(int c);
int	ft_strlen(const char* s);
int	ft_tolower(int c);
int	ft_toupper(int c);
char*	ft_strchr(const char *str, int c);
char*	ft_strrchr(const char *str, int c);
int	ft_strncmp (const char *s1, const char *s2, unsigned int size);
void*	ft_memset (void *block, int c, unsigned int size);
void	ft_bzero(void *block, unsigned int size);
void	*ft_memchr (const void *block, int c, unsigned int size);
void	*ft_memcpy (void *restrict to, const void *restrict from, unsigned int size);
int	ft_memcmp(const void *a1, const void *a2, unsigned int size);
void	*ft_memmove(void *to, const void *from, unsigned int size);
unsigned int	ft_strlcpy (char *to, const char *from, unsigned int size);

#endif
