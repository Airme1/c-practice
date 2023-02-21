#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int i, a= 1;
	if(argc >= 3)
		printf("%d", atoi(argv[1]) * atoi(argv[2]) );
	else
		printf("Error");
	return 0;
}
