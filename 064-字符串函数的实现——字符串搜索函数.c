/*
字符串中找字符：
char * strchr(const char *s, int c);  ————表示从左边开始，在s字符串里面寻找c字符第一次出现的位置，返回的是一个指针

char * strrchr(const char *s, int c); ————表示从右边开始，······

返回NULL表示没有找到



如何寻找第二个？
*/


//例子都是寻找hello里面的l

//如何找第二个的小技巧
#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
	char s[] = "hello";
	char *p = strchr(s, 'l');
	//p = strchr(p+1, 'l');  //找第二个的小技巧
	printf("%s\n", p);
	
	return 0;
}


//找到相应字符串后，进行复制
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
//int main(int argc, char const *argv[])
//{
//	char s[] = "hello";
//	char *p = strchr(s, 'l');
//	char *t = (char*)malloc(strlen(p)+1);
//	strcpy(t, p);
//	printf("%s\n", t);
//	free(t);
//	
//	return 0;
//}
//
//
////以本例为例：我们找到了这个‘l’，但是我们想要‘l’前面的字符串：
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
//int main(int argc, char const *argv[])
//{
//	char s[] = "hello";
//	char *p = strchr(s, 'l');
//	char c = *p;  //先用变量c临时存一下*p的值
//	*p = '\0';    //令*p的值变成'\0'（因为*p = l，将*p变成\0，就是将s数组里面的第一个l变成\0）  //通过指针把hello里面第一个l改写成了'\0'，因此此时s数组的字符串就只有he了
//	char *t = (char*)malloc(strlen(s)+1);  //然后给*t申请和s一样大小空间的内存
//	strcpy(t, s); //再把s数组里面的字符串拷贝给t
//	printf("%s\n", t); //最后我们输出得到'l'前面的字符串
//	free(t);
//	*p = c;  //最后做完我们需要做的步骤后，将*p原本的内容给恢复回去。
//	
//	return 0;
//}




/*
字符串中找字符串：
char * strstr(const char *s1, const char *s2);

char * strcasestr(const char *s1, const char *s2);  //在寻找的过程中，会忽略大小写。不管大小写来做一个寻找
*/