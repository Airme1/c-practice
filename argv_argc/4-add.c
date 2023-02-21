#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[])
{
	int i, a = 0;
	if(argc == 1)
	{
		printf("0");
		return 0;
	}
	else
	{
	for(i = 1; i < argc; i++)
	{
		if (argv[i] >= '0' && argv[i] <= '9') 
			a += atoi(argv[i]);
		else
			return 1;
	}
	printf("%d", a);
	}
	return 0;
}
		
