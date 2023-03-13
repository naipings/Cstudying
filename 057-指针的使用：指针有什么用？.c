/*
指针应用场景1：交换两个变量的值（如：例1）
————函数返回多个值，某些值就只能通过指针返回（如：示例1）
		传入的参数实际上是需要保存带回的结果的变量
*/

/*
//例1
#include <stdio.h>

void swap(int *pa, int *pb);

int main(void)
{
	int a = 5;
	int b = 6;
	swap(&a, &b);
	printf("a=%d,b=%d\n", a, b);
	return 0;
}

void swap(int *pa, int *pb)
{
	int t = *pa;
	*pa = *pb;
	*pb = t;
}
*/

/*
//示例1：找出一个数组里面的最大值与最小值
#include <stdio.h>

void minmax(int a[], int len, int *min, int *max);  //由于最终会得到两个结果，而两个结果是无法通过函数的返回值去返回的，因为返回值只能返回一个结果，所以我们用两个指针来做这种事情

int main(void)
{
	int a[] = {1,2,3,4,5,6,7,8,9,12,13,14,16,17,21,23,55};
	int min,max;
	minmax(a, sizeof(a)/sizeof(a[0]), &min, &max);
	printf("min=%d,max=%d\n", min, max);
	
	return 0;
}

void minmax(int a[], int len, int *min, int *max)
{
	int i;
	*min = *max = a[0];
	for ( i=1; i<len; i++ ) {
		if ( a[i] < *min ) {
			*min = a[i];
		}
		if ( a[i] > *max ) {
			*max = a[i];
		}
	}
}
*/



/*
指针应用场景2：
函数返回运算的状态，结果通过指针返回
常用的套路是让函数返回特殊的不属于有效范围内的值来表示出错：
	-1或0（在文件操作会看到大量的例子）（使用-1或0来表示出错）
但是当任何数值都是有效的可能结果时，就得分开返回了
	后续的语言（C++，Java）采用了异常机制来解决这个问题
*/
//例2：做一个两个整数做除法的函数
#include <stdio.h>
/**
	@return 如果除法成功，返回1；否则返回0
*/
int divide(int a, int b, int *result);

int main(void)
{  
	int a = 5;
	int b = 2;
	int c;
	if ( divide(a, b, &c) ) {
		printf("%d/%d=%d\n", a, b, c);
	}
	return 0;
}

int divide(int a, int b, int *result)
{
	int ret = 1;
	if ( b == 0 ) ret = 0;
	else {
		*result = a/b;
	}
	return ret;
}



/*
指针最常见的错误：
定义了指针变量，还没有指向任何变量，就开始使用指针
（例子见视频里面）
*/