#include <stdio.h>
#include <stdlib.h>


int main() {
	int num,a=0;
	
	do 
	{
		printf("\n Enter a number: ");
		scanf ("%d",&num);
		printf("no.is %d",num);
		a++;
	}
	while (num!=0);
	{
		printf("\n The total number entered were %d",--a);
	}
	
	return 0;
}
