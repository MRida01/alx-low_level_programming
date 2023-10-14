#include <stdio.h>
/**
 * main - FizzBuzz challenge
 */
void main(void)
{
int n;

for (n = 0; n <= 100; n++)
{
if (n % 15 == 0)
{
printf("FizzBuzz");
}
else if (n % 5 == 0)
{
printf("Buzz");
}
else if (n % 3 == 0)
{
printf("Fizz");
}
else
{
printf("%d", n);
}
if (n != 100)
{
printf("\n");
}
}
}
