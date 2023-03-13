#include <stdio.h>

int search(int key, int a[], int length);

int main(void)
{
	int a[] = {2,4,6,7,1,3,5,9,11,13,23,14,32,}; //数组的集成初始化
	//	int a[13] = {2}; //
//	{
//		int i;
//		for ( i=0; i<13; i++ ) {
//			printf("%d\t", a[i]);
//		}
//		printf("\n");
//	}
	int x;
	int loc;
	printf("请输入一个数字：");
	scanf("%d", &x);
	loc = search(x, a, sizeof(a)/sizeof(a[0]));  //在这里进行函数调用时，我们就知道了，length = sizeof(a)/sizeof(a[0]); 
	if ( loc != -1 ) {
		printf("%d在第%d个位置上\n", x, loc);
	} else {
		printf("%d不存在\n", x);
	}
	
	return 0;
}

int search(int key, int a[], int length)  //数组作为参数时，往往必须再用另一个参数来传入数组的大小。如本题的length（length的大小，见函数的调用那里）。  原因：数组作为函数的参数时：1.不能在[]中给出数组的大小  2.不能再利用sizeof来计算数组的元素个数。
{
	int ret = -1;
	int i;
	for ( i=0; i<length; i++ ) {
		if ( a[i] == key) {
			ret = i;
			break;
		}
	}
	return ret;
}
/*
找出key在数组a中的位置
其中：
		key 	要寻找的数字
		a   	要被寻找的数组
		length  数组a的长度
如果找到，返回其在数组a中的位置；如果找不到，则返回-1
*/	