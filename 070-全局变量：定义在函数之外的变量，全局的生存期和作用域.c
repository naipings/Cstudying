#include <stdio.h>

int f(void);

int gAll = 12;

//int gAll;  //没有初始化的全局变量会得到0值

//int gAll = f();
//int g2 = gAll;
//编译时，这里会报错，因为：只能用编译时刻已知的的值来初始化全局变量

//const int gAll = 12;
//int g2 = gAll;
//这时候就可以。（因为gAll是const，所以先要把f()函数里面gAll += 2;这句话注释起来，再进行编译）
//但是这种方法不建议使用，因为以后的大程序都是多个C文件，全局变量的初始化顺序相比于一个C文件，是不明确的。

int main(int argc, char const *argv[])
{
	printf("in %s gAll=%d\n", __func__, gAll);  //__func__这是一个字符串（所以前面我们用%s），这个字符串表达的是当前这个函数的名字
	f();
	printf("agn in %s gAll=%d\n", __func__, gAll);
	return 0;
}

int f(void)
{
	//int gAll = 1;  //这是一个普适原则，在更小的地方可以重新定义在更大地方曾经出现过的变量，然后把他隐藏掉，对全局变量也是如此。
/*
	{
		int gAll = 2;	
		printf("in %s gAll=%d\n", __func__, gAll);
		gAll += 2;
		printf("agn in %s gAll=%d\n", __func__, gAll);
	}
*/
	printf("in %s gAll=%d\n", __func__, gAll);
	gAll += 2;
	printf("agn in %s gAll=%d\n", __func__, gAll);
	
	return gAll;
}

/*
全局变量初始化：
没有初始化的全局变量会得到0值
	指针会得到NULL值
只能用编译时刻已知的的值来初始化全局变量
它们的初始化发生在main函数之前
*/

/*
被隐藏的全局变量：
如果函数内部存在与全局变量同名的变量，则全局变量被隐藏
*/