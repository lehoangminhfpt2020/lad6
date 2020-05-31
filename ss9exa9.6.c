#include <stdio.h>
#include <stdlib.h>

int main() {
	int count=0;
	while (count<100)
	{
		printf ("this goes on forever, HELP!! \n");
		count +=10;
		printf ("\t%d",count);
		count -=10;
		printf ("\t%d",count);
		printf ("\Ctrl - C will help");
	}
	return 0;
}
