#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - checks the first digit of a random number
 *
 * Return: 0
 */
int main(void)
{
int n;

int m;

srand(time(0));
n = rand() - RAND_MAX / 2;
m = n % 10
printf("Last digit of %d is %d and is ", n, m);
if (m > 5)
{
	printf("greater than 5\n");
}
else if (m == 0)
{
	printf("0\n");
}
else
{
	printf("less than 6 and not 0\n");
}
return(0);
}
