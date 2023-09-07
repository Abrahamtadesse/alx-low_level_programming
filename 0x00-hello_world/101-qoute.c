#include <unistd.h>

/**
 * main - Entry point of the program
 *
 * Return: 1
 */
int main(void)
{
    int len = 59;
    char *str = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

    write(2, str, len);

    return (1);
}
