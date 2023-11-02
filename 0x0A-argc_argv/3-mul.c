#include <unistd.h>
#include <stdio.h>
#include <string.h>
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
 * main - prints out multiple of two arguments
 * @argc: argument count
 * @argv: argument value
 *
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
char n = '\n';

int num1;

int num2;

int result;

char resultStr[20];

size_t len2;

int len;

char *m = "Error";

if (argc < 3 || argv[1] == NULL || argv[2] == NULL)
{
len2 = strlen(m);
write(1, m, len2);
write(1, &n, 1);
return (1);
}
num1 = extractnum(argv[1]);
num2 = extractnum(argv[2]);
result = num1 * num2;
len = snprintf(resultStr, sizeof(resultStr), "%d", result);
write(1, resultStr, len);
write(1, &n, 1);
return (0);
}
