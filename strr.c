char *ft_strrchr(const char *str, int c)
{
     int i;
     char *new;

    new = (char *) str;
        if (c == 0)
            return(new + ft_strlen(new));
    i = ft_strlen(new);
    while(i >= 0)
    {
        if (new[i] == c)
            return (&new[i]);
        i--;
    }
    return (0);
}