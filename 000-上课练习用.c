//利用数组判断素数，对024的改进，提高程序运行效率
#include <stdio.h>

int isPrime( int x, int knowPrimes[], int numberOfKnowPrimes );

int main(void)
{
	const int number = 10;
	int prime[10] = {2};  //devc++好像没法实现：int prime[number] = {2};
	int count = 1;
	int i = 3;
	
	
	{
		int i;
		printf("\t\t\t\t");
		for ( i=0; i<number; i++ ) {
			printf("%d\t", i);
		}	
		printf("\n");
	}
		
		
	while ( count < number ) {
		if ( isPrime(i, prime, count) ) {
			prime[count++] = i;  	//这一行做了两件事：先把i的值存到prime数组的第cnt个位置，然后让cnt++（也就让cnt再存入下个值之前，先指向下一个位置）
		}
		
		
	{
		printf("i=%d \tcnt=%d\t",i, count);
		int i;
		for ( i=0; i<number; i++ ) {
			printf("%d\t", prime[i]);
		}
		printf("\n");
	}
	
	
		i++;
	}
	for ( i=0; i<number; i++ ) {
		printf("%d", prime[i]);
		if ( (i+1)%5 ) {
			printf("\t");
		} else {
			printf("\n");
		}
	}
	return 0;
}

int isPrime( int x, int knowPrimes[], int numberOfKnowPrimes )
{
	int ret = -1;
	int i;
	for ( i=0; i<numberOfKnowPrimes; i++ ) {
		if ( x % knowPrimes[i] == 0 ) {
			ret = 0;
			break;
		}
	}
	return ret;
}
