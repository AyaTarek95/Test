#include <stdio.h>
#include <stdlib.h>

int main()
{
        char c;

    c = 'a';
           while (c >= 'a' && c <= 'z')
        {
            if (c == 'q' || c == 'e')
                {
                    c++;
                }
                putchar(c);
                c++;
        }
        putchar('\n');
        return (0);
}

