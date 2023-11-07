#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
/**
 * main - writes the name of the file it was compiled from
 *
 * Return: 0
 */
int main()
{
char *filename = __FILE__;

for (int i = 0; filename[i] != '\0'; i++)
{
_putchar(filename[i]);
}
_putchar('\n');
return (0);
}