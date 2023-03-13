#include <stdio.h>

int main()
{
	int a;
	scanf("%d",&a);	
		if (a>=0 && a<10) {
			printf("1");
		}
		else if (a>+10 && a<100) {
			printf("2");
		}	
		else if (a>=100 && a<1000) {
			printf("3"); 
		}
		else if (a>=1000 && a<10000) {
			printf("4");
		}
	    else {
		printf("对不起，你输入的数字无效");
	}	
	return 0;
}

//本方法只适合解决有限位数计算，因而并不完美