#include <stdio.h>
#include <stdlib.h>


int main() {
	int a;
	char b[10];
	
	printf("nhap so tuoi: ");
	fflush(stdin);
	scanf ("%d",&a);
	printf("nhap ten: ");
	fflush(stdin);
	scanf ("%s",&b);
	
	for (a;a>0;a--)
	printf ("%s",b);
	
	return 0;
}
