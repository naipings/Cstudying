/*
输入数据：
如果输入数据时，先告诉你个数，然后再输入，要记录每个数据

C99可以用变量做数组定义的大小，C99之前呢？

int *a = (int*)malloc(n*sizeof(int)); //n*sizeof(int)表示要多少个（n个）int类型的空间 （n通常是由需要的总字节数除以那个sizeof）
									  //并且通过malloc(n*sizeof(int))得到的时void*类型，所以再在前面加上(int*)将他转换为我们需要的int*类型
*/
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(void)
//{
//	int number;
//	int* a; //并且在C99之前，所有的变量定义都得写在最前面
//	int i;
//	printf("输入数量：");
//	scanf("%d", &number);
//	//int a[number]; //这是在C99下面才可以的
//	a = (int*)malloc(number*sizeof(int)); //之后所做的所有事情，都可以把a当作数组来使用
//	for ( i=0; i<number; i++ ) {
//		scanf("%d\n", &a[i]);
//	}
//	for ( i=number-1; i>=0; i-- ) {
//		printf("%d ", a[i]);
//	}
//	free(a);
//	
//	return 0;
//}

/*
malloc：

#include <stdlib.h>
void* malloc(size_t size);
向mallloc申请的空间的大小是以字节为单位的
返回的结果是void*，需要类型转换为自己需要的类型
	(int*)malloc(n*sizeof(int))
*/

/*
没空间了？
如果申请失败则返回0，或者叫做NULL
你的系统能给你多大的空间？
*/
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(void)
//{
//	void *p = 0;
//	int cnt = 0;
//	while ( (p=malloc(100*1024*1024)) ) {  //注;1024即：1kb；  1024*1024即：1mb；   100*1024*1024即：100mb  //如果p得到的值不是0，那么循环就要继续
//		cnt++;
//	}
//	printf("分配了%d00MB的空间\n", cnt);
//	
//	return 0;
//}


/*
free()
————与malloc配套的函数
把申请得来的空间还给“系统”
申请过的空间，最终都应该要还
只能还申请来的空间的首地址
*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i;
	void *p = 0; //定义指针的好习惯是：都把他初始化为0
	int cnt = 0;
	//p=malloc(100*1024*1024));
	//p++;
	p = &i;
	free(p); //free(NULL);是能通过编译的，因为0(也就是NULL)是不可能通过malloc得到的地址，所以free(NULL);相当于不做任何事情

	return 0;
}

/*
常见问题：
申请了没free——>长时间运行内存逐步下降
	新手：忘了
	老手：找不到合适的free的时机
free过了再free
地址变过了，直接去free
*/
