#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
/**
 * extractnum - extracts number from argument
 * @str: string to use
 *
 * Return: found number
 */
int extractnum(char *str)
{
int num = 0;

int sign = 1;

int i = 0;

if (str[i] == '-')
{
sign = -1;
i++;
}
while (str[i] != '\0')
{
num = num * 10 + str[i] - '0';
i++;
}
return (num * sign);
}
/**
 * notnumeric - checks if a string isn't a number
 * @str: string to use
 *
 * Return: 0 or 1
 */
int notnumeric(char *str)
{
while (*str)
{
if (!isdigit(*str))
{
return (1);
}
str++;
}
return (0);
}
/**
 * main - prints out multiple of two arguments
 * @argc: argument count
 * @argv: argument value
 *
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
char n = '\n';

int i;

int j = argc;

int num1;

int result = 0;

char resultStr[20];

size_t len2;

int len;

char *m = "Error";

if (j > 0)
{
for (i = 1; i < j; i++)
{
if (notnumeric(argv[i]) == 1)
{
len2 = strlen(m);
write(1, m, len2);
write(1, &n, 1);
return (1);
}
num1 = extractnum(argv[i]);
result = num1 + result;
}
len = snprintf(resultStr, sizeof(resultStr), "%d", result);
write(1, resultStr, len);
write(1, &n, 1);
}
return (0);
}
