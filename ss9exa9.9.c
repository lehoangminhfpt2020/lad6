#include <stdio.h>
#include <stdlib.h>


int main() {
	int x; 
	char i,ans;
	
	do 
	{
		
		x=0;
		ans='y';
		printf ("\n enter sequence of character: ");
		do 
		{
			i=getchar();
			x++;
		}
		while (i!='\n');
		
		printf ("\n Number of characters entered is: %d ",--x);
		printf ("\n More sequences (Y/N)?");
		ans = getch();
		
	}
	while (ans =='y'||ans =='Y');
	return 0;
}
