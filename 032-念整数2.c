#include <stdio.h>

int main()
{
	
	int x;
	scanf("%d", &x);
	
	if ( x < 0 && x >= -100000 ) {
		printf("fu ");
		x=-x;		
	}
	
	int mask = 1;
	int t = x;
	while( t>9 ) {
		t/=10;
		mask *= 10;
	}
	//printf("%d", mask); //调试用
	//求位数

	
	if ( x>=0 && x <= 100000 ) {
	do {
		int d = x / mask;
		
		switch ( d ) {
		case 0:
			printf("ling");
			break;
		case 1:
			printf("yi");
			break;
		case 2:
			printf("er");
			break;
		case 3:
			printf("san");
			break;
		case 4:
			printf("si");
			break;
		case 5:
			printf("wu");
			break;
		case 6:
			printf("liu");
			break;
		case 7:
			printf("qi");
			break;
		case 8:
			printf("ba");
			break;
		case 9:
			printf("jiu");
			break;		
		defoult:
			printf("未找到");	
	}
	
		if ( mask > 9 ) {
			printf(" ");
		}
		x %= mask;
		mask /= 10;
	} while ( mask > 0 );
	printf("\n");
	}
	//正序分解并打印拼音
	
	
	return 0;
}