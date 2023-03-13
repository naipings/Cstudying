#include <stdio.h>

int main()
{
	int B,U;
	
	scanf("%d",&B);
	
	if (B >= 800) {
		U = B - 800;
		printf("%d",U);		
	}
	else {
		B = B + 2400;
		U = B - 800;
		printf("%d",U);
	}
	
	return 0;	
}

//最终得分为5分