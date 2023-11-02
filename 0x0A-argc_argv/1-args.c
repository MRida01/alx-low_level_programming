#include <unistd.h>
#include <stdio.h>
#include <string.h>
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

int count = argc - 1;

char countStr[20];

int length;

(void)argv;
length = snprintf(countStr, sizeof(countStr), "%d", count);
write(1, countStr, length);
write(1, &n, 1);
return (0);
}
