#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char s[256];
    int b, i, j, m, g;

    gets(s);
    b = atoi(s);

    for (i = 0; i < 1 << b; ++i)
    {
        g = i ^ (i / 2);
        m = 1 << (b - 1);

        for (j = 0; j < b; ++j)
        {
            s[j] = (g & m) ? '1' : '0';
            m >>= 1;
        }
        s[j] = '\0';
        puts(s);
    }
    return 0;
}

