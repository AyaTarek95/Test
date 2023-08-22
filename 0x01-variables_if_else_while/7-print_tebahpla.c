#include <stdio.h>
int main()
{
    char c = 'z';
    while (c >= 'a')
    {
        putchar(c);
        c--;
    }
    putchar('\n');
    return(0);
}
