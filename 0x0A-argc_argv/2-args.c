#include <unistd.h>
#include <string.h>
/**
 * main - prints out the program name
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

char m = "ERROR";

char *str = argv[0];

size_t len = strlen(str);

if (argc > 2)
{
for (i = 1; i < j; i++)
{
*str = argv[i];
len = strlen(str);
write(1, str, len);
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
