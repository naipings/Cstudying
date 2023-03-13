/*
编译预处理指令;
#开头的是编译预处理指令
它们不是C语言的成分，但是C语言程序离不开它们
#define用来定义一个宏

#include是用来引入一个头文件，这里我们暂时不做讨论
*/
//#include <stdio.h>
//
////const double PI = 3.14159;  //这是C99的做法
//
//#define PI 3.14159  //在C99之前：我们使用宏。因为老的编译器可能没有const
//					//我们定义一个宏，后面所有的这个名字都会被值给替换掉。例如这里定义了宏之后，后面的PI都被替换成3.14159
//
//int main(int argc, char const *argv[])
//{
//	//printf("%f\n", 2*3.14159*3.0); 
//	printf("%f\n", 2*PI*3.0); 
//	return 0;
//	
//}


/*
#define：
#define <名字> <值>
注意没有结尾的分号，因为不是C的语句
名字必须是一个单词，值可以是各种东西
在C语言的编译器开始编译之前，编译预处理程序（cpp）会把程序中的名字替换从值
	完全的文本替换
gcc ——save-temps
*/
//#include <stdio.h>
//
//#define PI 3.14159
//#define FORMAT "%f\n"
//
//int main(int argc, char const *argv[])
//{
//	printf(FORMAT, 2*PI*3.0); 
//	
//	return 0;
//}


/*
宏：
如果一个宏的值中有嵌套的宏的名字，也是会被替换的
如果一个宏的值超过一行，最后一行之前的行末需要加\
宏的值后面出现的注释不会被当作宏的值的一部分
*/
//例1：
//#include <stdio.h>
//
//#define PI 3.14159
//#define FORMAT "%f\n"
//#define PI2 2*PI
//
//int main(int argc, char const *argv[])
//{
//	printf(FORMAT, PI2*3.0);
//	return 0;
//}

//例2：
//#include <stdio.h>
//
//#define PI 3.14159
//#define FORMAT "%f\n"
//#define PI2 2*PI
//#define PRT printf("%f ", PI); \
//			printf("%f\n", PI2)
//
//int main(int argc, char const *argv[])
//{
//	PRT;
//	return 0;
//}


/*
没有值的宏：
#define _DEBUG
这类宏是用于条件编译的，后面有其他的编译预处理指令来检查这个宏是否已经被定义过了
*/

/*
预定义的宏：
__LINE__	表达这个源代码文件的行号，当前所在的行号
__FINE__	表达当前文件的文件名
__DATE__	表达编译时候的日期
__TIME__	表达编译时候的时间
__STDC__
*/
//#include <stdio.h>
//
//int main(int argc, char const *argv[])
//{
//	printf("%s:%d\n", __FILE__, __LINE__);
//	printf("%s,%s\n", __DATE__, __TIME__);
//	return 0;
//}

