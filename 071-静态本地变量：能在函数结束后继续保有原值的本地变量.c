/*
静态本地变量：
在本地变量定义时加上static修饰符就成为静态本地变量
当函数离开时，静态本地变量会继续存在并保持其值
静态本地变量的初始化只会在第一次进入这个函数时做，以后进入函数时会保持上次离开时的值
*/
//#include <stdio.h>
//
//int f(void);
//
//int gAll = 12;
//
//int main(int argc, char const *argv[])
//{
//	f();
//	f();
//	f();
//	return 0;
//}
//
//int f(void)
//{
//	//int all = 1;
//	static int all = 1;
//	
//	printf("in %s all=%d\n", __func__, all);
//	all += 2;
//	printf("agn in %s all=%d\n", __func__, all);
//	
//	return all;
//}

/*
静态本地变量：
静态本地变量实际上是特殊的全局变量
它们位于相同的内存区域
静态本地变量具有全局的生存期，函数内的局部作用域
static在这里的意思是局部作用域（本地可访问）
*/
#include <stdio.h>

int f(void);

int gAll = 12;

int main(int argc, char const *argv[])
{
	f();
	return 0;
}

int f(void)
{
	static int all = 1;
	int k = 0;
	int m = 12;
	float t = 2.00;
	
	printf("&gAll=%p\n", &gAll);
	printf("&all =%p\n", &all);
	printf("&k   =%p\n", &k);
	printf("&m   =%p\n", &m);
	printf("&t   =%p\n", &t);
		
	return all;
}