#include <stdio.h>
#include <stdlib.h>

/* lenh goto */

int main() {
	int num;
	label:
	{
		printf ("\n Enter a number: ");
		scanf("%d",&num);
	}
	
	if (num==1)
	 {
	goto test;
     }  
    else 
     {
    	goto label;
	 }
	
	test:
	 {	
	printf ("All done...");
	 }
		
	return 0;
}
