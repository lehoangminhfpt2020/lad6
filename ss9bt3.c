#include <stdio.h>
#include <stdlib.h>

/* in ra day fibonaci */

int main() {
	int a=0,b=1,c;
	for (;;)
	{
		c= a+b;
		a=b;
		b=c;
		printf("%d \n",c);
			
	}
	
	return 0;
}
