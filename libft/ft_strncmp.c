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

