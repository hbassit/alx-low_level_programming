#include <stdio.h>
#include "main.h"

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Two command line arguments allowed\n");
		return (1);
	}

	printf("argv[1] is %d\n", _atoi("   -402"));
	return (0);
}
