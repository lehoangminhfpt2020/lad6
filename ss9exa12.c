#include <stdio.h>
#include <stdlib.h>



int main() {
	int num;
	for(num=1;num<=100;num++)
	{
	if (num%9!=0) continue;
	printf ("%d\t ",num);
	}
	return 0;
}
