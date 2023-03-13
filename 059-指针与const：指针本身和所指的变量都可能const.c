//本节只适用于C99
#include <stdio.h>

int main()
{
	
	return 0;
}

/*
指针是const：
表示一旦得到了某个变量的地址，不能再指向其他变量
	int * const q = &i;//q是const
	*q = 26;//OK
	q++;	//ERROR
*/
/*
所指是const：
表示不能通过这个指针去修改那个变量（并不能使得那个变量成为const）
	const int *p = &i;
	*p = 26;//ERROR!(*p)是const
	i = 26;//OK
	p = &j;//OK
*/

/*
这些是啥意思？（归根结底只有两种意思：要么指针不可修改，要么不可通过指针修改）
int i;

const int* p1 = &i;
int const* p2 = &i;
int *const p3 = &i;

判断哪个被const了的标志是const在*的前面还是后面
如果const在*的前面，表示它所指的东西不能被修改（所以前面两种形式一样）（即前面讲的：所指是const）
如果const在*的后面，表示说指针不能被修改（即前面讲的：指针是const）
*/


/*
转换（在后面学习结构时，会着重讲这件事）
总可以把一个非const的值转换成const的
	void f(const int* x);
	int a = 15;
	f(&a); //ok
	const int b = a;
	
	f(&b); //ok
	b = a + 1; //Error!
	
当要传递的参数的类型比地址大的时候，这是常用的手段：既能用比较少的字节数传递值给参数，又能避免函数对外面的变量的修改
*/


/*
const数组：
const int a[] = {1,2,3,4,5,6,};
数组变量已经是const的指针了，这里的const表明数组的每个单元都是const int
所以必须通过初始化进行赋值
*/

/* 
保护数组值：
因为把数组传入函数时传递的是地址，所以那个函数内部可以修改数组的值
为了保护数组不被函数破坏，可以设置参数为const
	int sum(const int a[], int length);
*/