#include <stdio.h>

int main(void)
{
	char name[] = "Jeremiah";
	char school[] = "Demonstration";
	char complete[];

	complete[] = strcat(*name, *school);
	
	return 0;
}

void strcat(char *s, char *t)
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

