#include <stdio.h>
#include <stdlib.h>

/*  2 vong for long nhau */

int main() {
	int i,j,k;
	printf ("enter no. of row: ");
	scanf ("%d",&i);
	printf ("\n");
	for (j=0;j<i;j++)
	{
		printf ("\n");
		
		for (k=0;k<=j;k++)
        printf ("*");
	}
	return 0;
}
