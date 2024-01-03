#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1); 
}

void rot_13(char *str)
{
    while (*str)
    {
        if (*str >= 'A' && *str <= 'Z')
        {
            ft_putchar((*str - 'A' + 13) % 26 + 'A');
        }
        else if (*str >= 'a' && *str <= 'z')
        {
            ft_putchar((*str - 'a' + 13) % 26 + 'a');
        }
        else
            ft_putchar(*str);
        str++;
    }
}

int main (int argc, char **argv)
{
    if (argc == 2)
    {
        rot_13(argv[1]);
    }
    write(1, "\n", 1);
    return (0);
}