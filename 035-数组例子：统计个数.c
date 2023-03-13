#include <stdio.h>

int main()
{
	const int number = 10;  //决定数组的大小  C99才能用const
	int x;
	int count[number];  //定义数组
	int i;
	
	for ( i=0; i<number; i++ ) {
		count[i] = 0;
	}                                 //初始化数组，将它们的初始值都赋值（为0）（本例赋值为0）    注意：数组的初始化 要用循环来遍历数组 去给每一个元素赋值
	
	scanf("%d", &x);
	while ( x!=-1 ) {
		if ( x >= 0 && x <= 9) {
			count[x]++;	  //数组参与运算（本例中：此时相当于计数器）
		}	
		scanf("%d", &x);
	}
	
	for ( i=0; i<number; i++ ) {
		printf("%d:%d\n", i, count[i]);
	}                                //遍历数组输出    
	return 0;
}
//通常使用数组 都需要上面这么一些环节
