#include <stdio.h>
/**
 *main 
 *
 *Description: Print the lowercase alphabet
 *Return: Always 0 (success)
 */
int main(void)
{

int lowercase;
for (lowercase = 0; lowercase <= 26; lowercase++)
putchar('a' + lowercase);

putchar('\n');

return (0);
}

