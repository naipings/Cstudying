#include <stdio.h>

int main()
{
	int x;
	int n;
	n = 100;
	
	for (x=2; x<n; x++) {
	int i;
	int isPrime = 1; // x是素数
	for (i=2; i<x; i++) {
		if (x % i == 0) {
			isPrime = 0;
			break;  //break会跳出其所在的循环，让其所在的循环不再进行下去，进而让程序执行后面的语句       补充：continue; 跳过循环的这一轮剩下的语句进入下一轮循环    注意：两者只能对它所在的那层循环做（有效）。
		}
	}
	if ( isPrime == 1 ) {
 		printf("%d ", x);
	}
	}
	printf("\n");
	return 0;
}