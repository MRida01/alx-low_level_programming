#include <unistd.h>
#include <string.h>
/**
 * main - prints out the following arguments
 * @argc: argument count
 * @argv: argument value
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
int i;

int j = argc;

char n = '\n';

char *m = "ERROR";

size_t len;

if (argc > 0)
{
for (i = 0; i < j; i++)
{
len = strlen(argv[i]);
write(1, argv[i], len);
write(1, &n, 1);
}
}
else
{
len = strlen(m);
write(1, &m, len);
write(1, &n, 1);
}
return (0);
}
