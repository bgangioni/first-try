#include <stdio.h>
// tabla de multiplicar 1 al 12

int main()
{
    int value;
    for (int j = 1; j < 13; j++)
    {
	for (int i = 1; i<13; i++)
	{
		value = i*j;
		if (value < 10) 
printf("  ");
		else if (value < 
100) printf(" ");
		printf("%d ",i*j);
	}
	printf("\n");
    }

	return 0;
}

