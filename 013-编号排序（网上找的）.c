#include <stdio.h>

int main()
{
	int n,i;
	i = 1;
	
	scanf("%d",&n);
	
	while (i <= n-2) {
		printf("%d ",i);
		i=i+2;
	}
	printf("%d",i);
	
	return 0;	
}
