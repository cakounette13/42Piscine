#include <stdlib.h>
#include <stdio.h>

int ft_strlen(char *str)
{
    int len = 0;
    while (str[len] != '\0')
        len++;
    return (len);
}

char *ft_strcpy(char *dest, char *src)
{
    int i;
    int src_len;

    i = 0;
    src_len = ft_strlen(src);
    dest = malloc(sizeof(char) * (src_len + 1)); // Allocate memory for the destination string
    if (dest == NULL) 
        return NULL; // Memory allocation failed
    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0'; // Null-terminate the destination string
    return dest;
}

int main(void)
{
    char src[] = "Hello, World!";
    char *dest;

    dest = ft_strcpy(dest, src);
    printf("Copied string: %s\n", dest);
    free(dest); // Free the allocated memory
    return 0;
}