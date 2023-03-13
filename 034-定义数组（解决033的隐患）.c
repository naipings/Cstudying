#include <stdio.h>

int main()
{
	int x;
	double sum = 0;
	
	int cnt;
	printf("请输入数字的数量：");
	scanf("%d", &cnt);
	if ( cnt > 0) {
		int number[cnt]; //C99 only   让用户输入有多少个数字要计算，这可以用C99的新功能来实现  此时隐患解决
		printf("请输入x的值："); 
		scanf("%d", &x);
		cnt = 0;
		while ( x!=-1 ) {
			number[cnt] = x;
			sum += x;
			cnt++;
			printf("请输入x的值："); 
			scanf("%d", &x);
		}
		if ( cnt > 0) {
			printf("%f\n", sum/cnt); //此处计算平均值
			int i;
			for ( i=0; i<cnt; i++ ) {
				if ( number[i] > sum/cnt) {
					printf("%d\n", number[i]); //此处打印x中比平均值大的x的值
				}
			}
		}
	}
	else {
		printf("对不起，您输入的cnt=%d无效", cnt);
	}
	return 0;
}