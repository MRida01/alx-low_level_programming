#include <unistd.h>
#include <string.h>
/**
 * main - writes and that piece of art is useful" - Dora Korpar, 2015-10-19
 *
 * Return: 1
 */
int main(void)
{
char n[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

write(1, n, strlen(n));
return (1);
}
