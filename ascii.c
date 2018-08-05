#include <stdio.h>
#include <ctype.h>

int main ()
{
     printf("_______________\nASCII Table\n_______________\n");
	for(int i=1;i<128;i++)
	{
		printf("%3d : ", i);
		if(isprint(i))
		  printf("%c", i);
		printf("\n");
	}
	return 0;
}
