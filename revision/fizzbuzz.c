#include <unistd.h>

char ft_putchar(char c)
{
    write(1, &c, 1);
}

char    ft_fizzbuzz(void)
{
    int i;

    i = 1;

    while (i <= 100)
    {
        if (i % 3 == 0 && i % 5 == 0)
        {
            write(1, "fizzbuzz", 8);
        }
        else if (i % 3 == 0)
        {
            write(1, "fizz", 4);
        }
        else if (i % 5 == 0)
        {
            write(1, "buzz", 4);
        }
        else
        {
            if(i == 100)
            {
                write(1, "100", 3);
            }
            else if (i > 0 && i <= 9)
                ft_putchar(i + '0');
            else
            {
                ft_putchar(i / 10 + '0');
                ft_putchar(1 % 10 + '0');
            }
        }
        i++;
    }
}

int main(void)
{
    ft_fizzbuzz();
    return(0);
}