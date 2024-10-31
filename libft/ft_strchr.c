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
