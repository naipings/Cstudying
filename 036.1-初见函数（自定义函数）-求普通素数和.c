//注意：虽然本题也求素数和 但其核心与031不同 其就是求所给的两个数值之间的所有素数和
#include <stdio.h>

int isPrime(int i)
{
	int ret = 1;
	int k;
	for ( k=2; k<i-1; k++) {
		if (i % k == 0) {
			ret = 0;
			break;
		}
	}
	return ret;	
}
//此部分代码就是判断一个值（这里是i）它是不是素数的代码，单独拿出来，以后就可以多次在别的地方使用

int main()
{
	int m, n;
	int sum = 0;
	int cnt = 0; 
	int i;
	
	scanf("%d %d", &m, &n);
	
	if ( m==1 ) m=2;
	for ( i=m; i<=n; i++) {
		if ( isPrime(i) ==1 ) { //这里就判断这个i它是不是素数，是就进入if语句里面
	 		sum += i;
	 		cnt ++;
		} 
		printf("%d %d\n", cnt, sum);
	}
	printf("最终的素数和=%d\n", sum);
	return 0;
}