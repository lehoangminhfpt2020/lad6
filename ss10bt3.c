#include <stdio.h>
#include <stdlib.h>



int main() {
	int a,b;
	printf("nhap so: ");
	scanf ("%d",&b);
	
	for (a=0;a<=10;a++)
	{
		printf ("\n");
		printf ("%d x %d =%d",b,a,a*b);
	}
	return 0;
}
