#include <stdio.h>
int main()
{
    int n = 0;
    char c = 'a';

    while (n <= 9)
    {
        putchar(48 + n);
        n++;
    }
    while (c <= 'f')
    {
        putchar(c);
        c++;
    }
    putchar('\n');
    return(0);
}
