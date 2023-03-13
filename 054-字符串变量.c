#include <stdio.h>

int main()
{  
    int i = 0;
    char *s = "Hello World";
    // s[0] = 'B';
    char *s2 = "Hello World";
    char s3[] = "Hello World";
    
    printf("&i=%p\n", &i);
    printf("s =%p\n", s);
    printf("s2=%p\n", s2);
    printf("s3=%p\n", s3);
    s3[0] = 'B';
    printf("Here!s3[0]=%c\n", s3[0]);
     
    return 0;
}
/*
char* s = "Hello World!";
s是一个指针，初始化为指向一个字符串常量
	由于这个常量所在的地方，所以实际上s是const char* s，但是由于历史的原因，编译器接受不带const的写法
	但是试图对s所指的字符串做写入会导致严重的后果
如果需要修改字符串，应该用数组：
char s[] = "Hello World!";
*/

/*
用指针还是用数组来表达字符串（指针还是数组？）：
char *str = "Hello";
char word[] = "Hello";

数组：这个字符串在这里
	作为本地变量空间自动回收
	
指针：这个字符串不知道在哪里
	只读不写
	处理参数
	动态分配空间
	
总之：
	如果要构造应该字符串——>数组
	如果要处理应该字符串——>指针
*/

/*
char*是字符串？（这个说法有误，应该是不一定）

字符串可以表达为char*的形式
char*不一定是字符串
	其本意是指向字符的指针，可能指向的是字符的数组（就像int*一样，可以指向一个数组，也可以指向单独的一个数）
	只有它所指的字符数组有结尾的0，才能说它所指的是字符串
*/