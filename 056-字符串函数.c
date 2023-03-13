#include <stdio.h>
#include <string.h>

/*
int main(int argc, char const *argv[])
{  
    char line[] = "Hello";
    printf("strlen=%lu\n", strlen(line));
    printf("sizeof=%lu\n", sizeof(line));
    
    return 0;
}
*/

/*
int main(int argc, char const *argv[])
{  
    char s1[] = "abc";
    //char s2[] = "abc";
    //char s2[] = "bbc";
    //char s2[] = "Abc";  //注：在其他有些编译器上，当两个数组不相等时，用strcmp函数后，输出的是第一个数组减去第二个数组的差值，而并不仅仅是1或-1
    char s2[] = "abc ";
    printf("%d\n", strcmp(s1,s2));
    //printf("%d\n", 'a'-'A');
    
    return 0;
}
*/

/
	string.h：
	
strlen
		size_t strlen(const char *s);
		返回s的字符串长度（不包括结尾的0）


strcmp
		int strcmp(const char *s1,const char *s2);
		比较两个字符，返回：
		0：s1==s2
		1：s1>s2
	   -1：s1<s2


strcpy
		char * strcpy(char *restrict dst, const char *restrict src);
		把src的字符串拷贝到dst
			restrict表明src和dst不重叠（C99）
		返回dst
			为了能链起代码来	


strcat
		char *strcat(char *restrict s1, const char *restrict s2);
		把s2拷贝到s1的后面，接成一个长的字符串
		返回s1
		s1必须具有足够的空间
		
		
strchr

strstr

*/

/*
安全问题：
strcpy和strcat都可能出现安全问题————如果目的地没有足够的空间？
	所以建议：尽可能不要使用这两个函数。

安全版本（建议使用的版本）：
char * strncpy(char *restrict dst, const char *restrict src, size_t n);

char * strncat(char *restrict s1, const char *restrict s2, size_t n);

int strncmp(const char *s1, const char *s2, size_t n); ————这个函数用于比较字符串数组的前几个字符，而不用去比较两个完整的数组
*/

/*
字符串中找字符：
char * strchr(const char *s, int c);  ————表示从左边开始，在s字符串里面寻找c字符第一次出现的位置，返回的是一个指针

char * strrchr(const char *s, int c); ————表示从右边开始，······

返回NULL表示没有找到



如何寻找第二个？
*/