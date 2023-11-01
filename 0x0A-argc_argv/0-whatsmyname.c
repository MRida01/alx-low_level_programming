#include <unistd.h>
#include <string.h>
/**
 * main - prints out the program name
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
char n = '\n';

char *str = argv[0];
    
size_t len = strlen(str);

if (argc > 0)
{
write(1, str, len);
write(1, &n, 1);
}
return (0);
}
