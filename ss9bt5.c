#include <stdio.h>
#include <stdlib.h>


int main() {
    int i,j;
	for(j=0;j<7;j++)
	{
		printf("\n");
		for(i=7-j;i>=1;i--)
		{
			printf ("*");
		}
	}
    
	return 0;
}
