#include <stdio.h>

int max(int a, int b)
{
	int ret;
	if ( a>b) {
		ret = a;
	//return a;  //这种多个return语句也是可以的 但是我们推崇单一出口原则，所以不提倡这种写法（并且这种多个出口的代码 在后期修改时，如果代码过多，需要修改的部分也越多，会让我们疲于奔命）
	} else {
		ret = b;
	//return b;  //同上。
	}
	
	return ret;	
}

int main()
{
	int a, b, c;
	a = 5;
	b = 6;
	c = max(10,12); //从函数中返回值： 1.可以赋值给变量
	c = max(a,b); //同1.
	c = max(c, 23);//同1.
	
	c = max(max(c,a), 5); //2.可以再传递给函数
	
	max(23,45); //3.甚至可以丢弃
	
	printf("%d\n", max(a,b));
	
	return 0;
}

/*
补充：
     没有返回值的函数：
     1.void 函数名(参数表)
     2.不能使用带值的return 即:可以使用return;
     	————可以没有return
     3.调用的时候不能做返回值的赋值
     eg：
     
     void sum(int begin, int end)
	{
		int i;
		int sum = 0;
		for ( i=begin; i<=end; i++ ) {
			sum += i;
		}
		printf("%d到%d的和是%d\n", begin, end, sum);
	}
*/	