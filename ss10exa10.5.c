#include <stdio.h>
#include <stdlib.h>

/* tinh giai thua */

int main() {
	int a,b,c=1;
	printf("nhap so:");
	scanf ("%d",&b);
	
	
		for(a=1;a<=b;a++)
		{
			c=c*a;
		}
	
	printf("%d",c);
	return 0;
}
