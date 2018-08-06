#include <stdio.h>

int main (int x)
{
	switch (x)
	{
		case 1: printf("%d is 1\n", x); break;
		case 2: printf("%d is 2\n", x);
		case 3: printf("%d or is it 3? xD\n", x); break; 
		default: printf("wow, this number is big!\n\n");
	}
}
