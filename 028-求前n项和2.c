#include <stdio.h>

int main()
{
	int n;
	int i;
	double sum = 0.0;
	int sign = 1;  //	double sign = 1.0;

	
	scanf("%d", &n);
	for ( i = 1; i<=n; i++ ) {
		i/i;
		sum += sign*1.0/i;  //sum += sign/i;
		sign = -sign;
		
	}
	
	printf("f(%d)=%f\n", n, sum);
	
	return 0;
	
}
//求的是：f(x)=1 - 1/2 + 1/3 - 1/4 + …… + 1/n