#include <unistd.h>
/**
 * main - prints out the program name
 *
 * Return: 0
 */
int main()
{
char *str = argv[0];
    
size_t len = strlen(str);

write(1, str, len);
return 0;
}
