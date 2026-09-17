#include <stdlib.h>
#include <stdio.h>

int *ft_range(int min, int max)
{
    int *result;
    int size;
    int i;

    size = max - min;
    if (min >= max)
    {
        result = NULL;
        return (NULL);
    }
    result = malloc(sizeof(result) * size);
    if (result == NULL)
    {
        return (NULL);
    }
    i = 0;
    while (min < max)
    {
        result[i] = min;
        min++;
        i++;
    }
    return (result);    
}

int main(void)
{
    int min;
    int max;
    int *result2;
    int i;

    i = 0;
    min = 30;
    max = 45;
    result2 = ft_range(min, max);
    while (min < max)
    {
        printf("%d ", result2[i]);
        min++;
        i++;
    }
}