#include <stdio.h>

void nstrcats(char *s, char *t);

int main(void)
{
        char name[] = "Jeremiah";
        char school[] = "Demonstration";
        int i;

        nstrcats(name, school);

	 printf("%s",name);
	 return 0;
}

void nstrcats(char *s, char *t)
{
        int i= 0;
        while (*s != '\0')
        {
                s = s+1;
                i++;
        }
        while(*s++ = *t++)
        ;
}

