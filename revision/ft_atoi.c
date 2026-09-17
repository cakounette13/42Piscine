#include <stdio.h>

int ft_atoi(char *str)
{
    int i;
    int neg;
    int result;

    i = 0;
    neg = 1;
    result = 0;
    while (str[i] <= ' ')
        i++;
    if (str[i] == '-')
    {
        neg = -1;
        i++;
    }
    else if (str[i] == '+')
        i++;
    while (str[i])
    {
        if (str[i] < '0' || str[i] > '9')
            return (result * neg);
        result = result * 10;
        result = result + (str[i] - '0');
        i++;
    }
    return (result * neg);
}

int main(void)
{
    char    str[] = "  42-8g613";
    printf("%d", ft_atoi(str));
    return (0);
}