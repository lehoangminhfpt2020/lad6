#include <stdio.h>
#include <stdlib.h>

/* nhap 2 so tim so le trong khoang giua 2 so vua nhap */
int main() {
	int a,b,c;
	printf ("nhap so a: ");
	scanf ("%d",&a);
	printf ("nhap so b: ");
	scanf ("%d",&b);
	
	if(a>b)
	{
		for (c=a;c>b;c--)
	  {
		if (c%2==0) continue;
		printf("%d\t",c);
	  }
	}
	
    else if(a<b)
    {
		for (c=b;c>a;c--)
	  {
	  
		if (c%2==0) continue;
		printf("%d\t",c);
      }
	}
	
	else
	{
	printf ("khong co so le nam giua 2 so nay");	
    }
	return 0;
}
