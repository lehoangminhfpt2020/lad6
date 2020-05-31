#include <stdio.h>
#include <stdlib.h>


int main() {
	int j,i;
	for (j=0;j<5;j++)
	{
		printf("\n");
		for (i=1;i<6-j;i++)
		{
			printf ("%d",i);
		}
	}
	return 0;
}
