#include <unistd.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 1
 */
int main(void)
{
    /* Message to be printed */
char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

    /* Use the write system call to print to standard error (file descriptor 2) */
write(2, message, 59);

    /* Return 1 as required */
return (1);
}
