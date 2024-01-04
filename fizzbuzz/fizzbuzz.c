#include <unistd.h>

void ft_printnum(int n)
{
    char *idx = "0123456789";

    if (n > 9)
    {
        ft_printnum(n / 10);
    }
    write(1, &idx[n % 10], 1);
}

void fizzbuzz()
{
    int i = 1;
    while (i <= 100)
    {
        if (i % 15 == 0)
            write(1, "fizzbuzz", 8);
        else if (i % 3 == 0)
            write(1, "fizz", 5);
        else if (i % 5 == 0)
            write(1, "buzz", 5);
        else
            ft_printnum(i);

        write(1, "\n", 1);
        i++; // Increment i outside of conditional statements
    }
}

int main(void)
{
    fizzbuzz();
    return (0);
}