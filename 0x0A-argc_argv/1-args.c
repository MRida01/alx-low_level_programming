#include <unistd.h>
/**
 * main - prints number of arguments
 * @argc: argument count
 * @argv: argument value
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
char n = '\n';

char *str = argv[0];

char s = argc + 48;

if (argc > 0)
{
write(1, s, 1);
write(1, &n, 1);
}
return (0);
}
