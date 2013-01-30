/*
Generate gray code
code by tvilas at hushmail dot com
https://github.com/tiagohide/FGV
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char **argv) 
{
    char *s = NULL;
    int b, i, j, m, g;

    s = calloc(1, 256);

    printf("Enter number then press <ENTER>: ");
    fgets(s, 255, stdin);

    if(strlen(s) > 5)
    {
        printf("Invalid input\n");
        if(s)
            free(s);
        exit(0);
    }

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

    free(s);
    return 0;
