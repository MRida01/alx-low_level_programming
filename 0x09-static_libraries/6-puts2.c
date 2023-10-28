#include <unistd.h>
#include "main.h"
/**
 * puts2 - writes then skips every other character of a string
 * @str: string to be printed
 */
void puts2(char *str)
{
int counter;
counter = 0;
while (*str != '\0')
{
if (counter == 0)
{
write(1, str, 1);
counter = 1;
}
else
{
counter = 0;
}
str++;
}
write(1, "\n", 1);
}
