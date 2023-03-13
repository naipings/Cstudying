#include <stdio.h>

int main()
{
	
	int a,n;
	n=0;
	scanf("%d",&a);	
	do
	{
		a /= 10;
		n++;
	} while ( a > 0 );
	
 	printf("%d",n);
 	
 	return 0;
}
