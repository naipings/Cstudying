/*
putchar函数：
int putchar(int c);
向标准输出（也就是那个黑窗口）写一个字符
返回写了几个字符，EOF（-1）表示写失败
				（即：End Of File 文件结束）
*/
/*
getchar函数：
int getchar(void);
从标准输入读入一个字符
返回类型是int是为了返回EOF（-1）
	Windows——>Ctrl-Z
	Unix——>Ctrl-D
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
	int ch;
	
	while ( (ch = getchar()) != EOF ) {  //将getchar()读入的东西传给变量ch，如果ch不等于EOF，那么执行循环
		putchar(ch);  //再每次循环中，向标准输出输出getchar()读入的字符
	}
	
	printf("EOF\n");
	
	return 0;
}
//注意哦：当我们输入EOF或者-1时，程序还是给我们原封不动的输出我们输入的东西，但是当我们输入Ctrl-Z（在Windows下）时，程序给我们返回了EOF
