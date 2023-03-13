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

/*
更简洁的写法：
#include <stdio.h>

int main()
{
	int a, b, c;
	scanf("%d %d %d",&a, &b, &c);
	
	int max = 0;
		
	if (a>=b) 
		if (a>=c) 
			max = a;
		else 
			max = c;
	else 
		if (b>=c) 
			max = b;
		else 
			max = c; 
		
	printf("%d是最大的\n",max);
	return 0;
}
*/