#include <stdio.h>

int main()
{
	int x;
	double sum = 0;
	int cnt=0;
	int number[100];  //此程序此时还存在隐患
	scanf("%d", &x);
	while ( x!=-1 ) {
		number[cnt] = x;
	/*	
	{			
		int i;
		printf("%d\t", cnt);
		for ( i=0; i<=cnt; i++ ) {
			printf("%d\t", number[i]);
		}
		printf("\n");
	}
	*/	
		printf("");
		sum += x;
		cnt++;
		scanf("%d", &x);
	}
	if ( cnt > 0) {
		printf("%f\n", sum/cnt);
		int i;
		for ( i=0; i<cnt; i++ ) {
			if ( number[i] > sum/cnt) {
				printf("%d\n", number[i]);
			}
		}
	}
	return 0;
}