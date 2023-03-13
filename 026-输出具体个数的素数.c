#include <stdio.h>

int main()
{
	int x;
	x = 2;
	int cnt = 0; //计数器
	
	//while (cnt < 50) { //while循环
	for ( x=2; cnt<50; x++) { //for循环，但是这种循环不好。因为其有些不好理解（原因便是两侧都是与x有关的表达式，都是中间是cnt有关的表达式）
		int i;
		int isPrime = 1; // x是素数
		for (i=2; i<x; i++) {
			if (x % i == 0) {
				isPrime = 0;
				break; //  break会跳出其所在的循环，让其所在的循环不再进行下去，进而让程序执行后面的语句       补充：continue; 跳过循环的这一轮剩下的语句进入下一轮循环    注意：两者只能对它所在的那层循环做（有效）。
			}
		}
		if ( isPrime == 1 ) {
	 		printf("%d ", x);
	 		cnt ++; //计数器
		} 
		//x++;	while循环
	}
	
	return 0;
}