#include <unistd.h>

void ft_putstr_non_printable(char *str)
{
    char *hex;
    int i;

    i = 0;
    hex = "0123456789abcdef";
    while (str[i] != '\0')
    {
        if ((str[i] >= 0 && str[i] <= 31) || (str[i] == 127))
        {
            write(1, "\\", 1);
            write(1, &hex[str[i] / 16], 1);
            write(1, &hex[str[i] % 16], 1);
            i++;
        }
        else
        {
            write(1, &str[i], 1);
            i++;
        }
    }
}

int main(void)
{
    char    str[] = "bon\njour";
    ft_putstr_non_printable(str);
    return (0);
}