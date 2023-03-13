#include <stdio.h>

int main()
{
	int a, b, c;
	scanf("%d %d %d",&a, &b, &c);
	
	if (a>=b) {
		if (a>=c) {
			printf("%d是最大的",a);
		}
		else {
			printf("%d是最大的",c);
		}
	}
	else {
		if (b>=c) {
			printf("%d是最大的",b);
		}
		else {
			printf("%d是最大的",c);
		}
	}
	
	return 0;
		

}
