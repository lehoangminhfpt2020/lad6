#include <stdio.h>
#include <stdlib.h>



int main() {
int a,b;
for (a=9;a>=0;a--)
{
	printf("\n");
	for (b=1;b<=9-a;b++)
	{
		printf("%d",b);
	}
}
	return 0;
}
