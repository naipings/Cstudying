//构造素数表，对024的改进；对041.1转换思路（利用数组上面每个数字的下标来代替数字）
#include <stdio.h>

int main()
{  
    const int maxNumber = 25;
	int isPrime[25];  //int isPrime[MaxNumber];
	int i;
	int x;
	for ( i=0; i<maxNumber; i++ ) {
		isPrime[i] = 1;              //将数组每个位置上面的值都初始化为1 ，默认都是素数
	}
	for ( x=2; x<maxNumber; x++ ) {
		if ( isPrime[x] ) {       //如果if条件成立，那么对这个数组的第x位置 执行for循环，
			for ( i=2; i*x<maxNumber; i++ ) { 
				isPrime[i*x] = 0;       //该for循环目的是： 将数组中 这些位置（即：x值的 2倍，3倍 ，4倍···i*x倍<MaxNumber的值）都赋值为0（赋值为0，就表示这个位置的下标值 为非素数）
			}
		}
	}
	for ( i=2; i<maxNumber; i++ ) {
		if ( isPrime[i] ) {       //由于if语句的默认条件成立的值时1；所以如果isPrime数组的第i个位置上的值是1，则表明这个i值为素数，所以就打印这个i值
			printf("%d\t", i);
		}
	}
	printf("\n");
    
    return 0;
}