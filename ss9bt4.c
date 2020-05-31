#include <stdio.h>
#include <stdlib.h>


int main() {
    int i,j;
    for (j=5;j>0;j--)
    {
    	printf ("\n");
    	for (i=1;i<=6-j;i++)
    	{
    		printf ("%d",i);
		}
	}
	return 0;
}
