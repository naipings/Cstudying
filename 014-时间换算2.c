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
	
	else if (b>=100 && b<800 && b%100<60) {
		u = b - 800;		
		u = 2400 + u;
		printf("%d",u);
	}
	else if (b>=100 && b<800 && b%100>=60) {
		b=b+40;
		u = b - 800;		
		u = 2400 + u;
		printf("%d",u);
	}

	else if (b>=800 && b<1000 && b%100<60) {
		u = b - 800;		
		printf("%d",u);
	}
	else if (b>=800 && b<1000 && b%100>=60) {
		b=b+40;
		u = b - 800;		
		printf("%d",u);
	}
	
	else if (b>=1000 && b<=2359 && b%100>=60) {
		b=b+40;
		u = b - 800;		
		printf("%d",u);
	}
	else if (b>=1000 && b<=2359 && b%100<60) {
		u = b - 800;		
		printf("%d",u);
	}
	
	else {
		printf("对不起，你输入的时间无效");
	}
	
	return 0;
	
	
	
	
	
	
}