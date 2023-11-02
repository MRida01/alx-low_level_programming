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
int count = 0;

char countStr[20];

int length;

(void)argc;
while (argv[count] != NULL)
{
count++;
}
length = snprintf(countStr, sizeof(countStr), "%d", count);
write(1, countStr, length);
return (0);
}
