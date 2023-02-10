#include <stdio.h>

char s[] = "hello";

int main()
{
    stst(s);
    return 0;
}

int stst( char *g)
{
    char *m = g;
    m +=3;
    printf("value of *s is %c", *m);
    return 0;
    }
