#include <stdio.h>

//void minmax(int a[], int len, int *min, int *max);
void minmax(int *a, int len, int *min, int *max);

int main(void)
{
	int a[] = {1,2,3,4,5,6,7,8,9,12,13,14,16,17,21,23,55};
	int min,max;
	
	printf("main sizeof(a)=%lu\n", sizeof(a));
	printf("main a=%p\n", a);
	
	minmax(a, sizeof(a)/sizeof(a[0]), &min, &max);
	
	printf("min=%d,max=%d\n", min, max);
	
	printf("a[0]=%d\n", a[0]);  //从这里以及
	
	int *p = &min;
	printf("*p=%d\n", *p);
	printf("p[0]=%d\n", p[0]);
	
	printf("*a=%d\n", *a); //前面我们已经将a[0]改成 1000了
	
	return 0;
}

//void minmax(int a[], int len, int *min, int *max)  //参数表里面的int a[]其实是一个指针（int *），他只是外表看起来像数组一样
void minmax(int *a, int len, int *min, int *max) 	//所以我们可以试着将int a[] 改成int *a
{
	int i;
	
	printf("minmax sizeof(a)=%lu\n", sizeof(a));
	printf("minmax a=%p\n", a);  //两个地址一样，说明在main里面的a数组与函数里面的a数组就是同一个数组
	
	a[0] = 1000;  //和从这里可以看出来，参数表里面的int a[]其实是一个指针
	
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

/*
所以，传入函数的数组组成了什么？
	函数的参数表中的数组实际上是指针
		sizeof(a) == sizeof(int*)
		但是可以用数组的运算符[]进行运算
*/

/*
数组参数
以下四种函数原型是等价的：
	int sun(int *ar, int n);
	int sum(int *, int);
	int sum(int ar[], int n);
	int sum(int [], int);
*/

/*
数组变量是特殊的指针
	数组变量本身表达地址，所以
		int a[10]; int*p=a;  //无需用&去地址
		但是数组的单元表达的是变量，需要用&去地址
		a == &a[0] //并且数组a的地址就等于数组a里面a[0]的地址
	[]运算符可以对数组做，也可以对指针做：
		p[0] <==> a[0]  //如果一个数组，我对他做p[0]，他就相当于*p
	*运算符可以对指针做，也可以对数组做：
		*a = 25;
	数组变量是const的指针，所以不能被赋值  
										（例如我们不能做这样的事：int a[]; int b[] = a;或者int a[]; int b[]; b = a;  所以数组变量之间是不能互相赋值的）
										（但是int a[]; int *p = a;  这样是可以的）
										（因为这里的int b[];实际上是int * const b;  const表示数组b是一个常数，他不能被改变，当他初始化/创建出来后，他是这个数组，他就不能再去代表别的数组了，所以他是一个常	量指针
		int a[] <==> int * const a =····
*/