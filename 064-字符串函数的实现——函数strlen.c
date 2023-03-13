/*
strlen：
size_t strlen(const char *s);
返回s的字符串长度（不包括结尾的0）
*/


#include <stdio.h>
#include <string.h>

size_t mylen(const char* s)
{
	//int cnt = 0;
	int idx = 0;
	while ( s[idx] != '\0' ) {
		idx++;
		//cnt++;
	}
	//return cnt;
	return idx;
}
//去掉上面的注释部分，可以简化自己写的mylen函数的代码   加上注释部分可以便于理解我们自定义的mylen函数

int main(int argc, char const *argv[])
{
	char line[] = "Hello";
	printf("strlen=%lu\n", strlen(line));
	printf("mylen =%lu\n", mylen(line));
	printf("sizeof=%lu\n", sizeof(line));
	
	return 0;
}