#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strdup(const char *s1) 
{
    char    *dup;
    size_t  i;

    dup = malloc(strlen(s1) + 1);
    if (!dup)
        return (NULL);
        i = 0;
    while (s1[i])
    {
        dup[i] = s1[i];
        i++;
    }
    dup[i] = '\0';
    return (dup);
}
/*
int main(void)
{
char	*dup;

	dup = ft_strdup("Hello");

	printf("%p\n", (void *)dup);

	dup[0] = 'Y';

	printf("%s\n", dup);

	free(dup);
	return (0);
}*/