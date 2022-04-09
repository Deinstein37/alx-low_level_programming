#include <stdio.h>
/**
 *main 
 *
 *Description: Print the lower case alphabet
 *Return: Always 0(success)
 */
int main(void)
{
int c;

for (c = 0; c < 26; ++c)
putchar('a' + c);

putchar('\n');

return (0);

}
