#include <stdio.h>

int main ()
{
	int array[4];
	array[0] = 3;
	printf("will %d be equal to %d but not to %d\n\n",array,&array[0],array);
	return 0;
}
