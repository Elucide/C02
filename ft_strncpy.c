char *ft_strncpy(char *s1, char *s2, int n)
{
    int i;

    i = 0;
    while (s1[i] && i < n)
    {
        s2[i] = s1[i];
        i++;
    }
    s2[i] = '\0';
    return (s2);
}