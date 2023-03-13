//注意：本题所求的素数和，并非普通给定两个数值后 求这两个数值之间的所有素数和
//本题要依据：“我们认为2是第一个素数，3是第二个素数，5是第三个素数，依次类推”这句话 所以例如给出：2 5这两个值，其分别对应：3 11这两个值 因而所求的素数和 是这两个值之间所有的素数之和
#include <stdio.h>

int main()
{
	int n, m;
	scanf("%d %d", &n, &m);
	
	int num;
	
	int x;
	x = 2;
	int cnt1 = 0;
	while (cnt1 < n) {
		int i;
		int isPrime = 1;
		for (i=2; i<x; i++) {
			if (x % i == 0) {
				isPrime = 0;
				break;
			}
		}
		if ( isPrime == 1 ) {
	 		cnt1 ++;
		} 
		x++;
	}
	int a=x-1;
	//printf("a=%d ", a);
	
	
	int y;
	y = 2;
	int cnt2 = 0;
	while (cnt2 < m) {
		int i;
		int isPrime = 1;
		for (i=2; i<y; i++) {
			if (y % i == 0) {
				isPrime = 0;
				break;
			}
		}
		if ( isPrime == 1 ) {
	 		cnt2 ++;
		} 
		y++;
	}
	int b=y-1;
	//printf("b=%d ", b);
	
	for (; a<=b; a++) {
	int i;
	int isPrime = 1;
	for (i=2; i<a; i++) {
		if (a % i == 0) {
			isPrime = 0;
			break;
		}
	}
	if ( isPrime == 1 ) {
		num += a;
	}
	}
		
	printf("%d\n", num);
	
	return 0;
}