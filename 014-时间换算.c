#include <stdio.h>

int main()
{
	int b,u;
	printf("请输入BJT时间：");
	scanf("%d",&b);
	if (b >= 0 && b < 60) {
		u = b - 800;		
		u = 2400 + u;
		printf("%d",u);
	}
	else if (b >= 100 && b < 160 ) {
		u = b - 800;		
		u = 2400 + u;
		printf("%d",u);
	}
	else if (b >= 200 && b < 260) {
		u = b - 800;		
		u = 2400 + u;
		printf("%d",u);
	}
	else if (b >= 700 && b <= 760) {
		u = b - 800;		
		u = 2400 + u;
		printf("%d",u);
	}
	
	
	
	
	
	
	
	return 0;
	
	
	
	
	
	
	
	
	
	
}