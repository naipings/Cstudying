/*
strcpy：
char * strcpy(char *restrict dst, const char *restrict src);
把src的字符串拷贝到dst
	restrict表明src和dst不重叠（C99）
返回dst
	为了能链起代码来
*/

/*
复制一个字符串：
char *dst = (char*)malloc(strlen(src)+1);
strcpy(dst,src);
*/


#include <stdio.h>
#include <string.h>

/*
//数组版本的mycpy函数：
char* mycpy(char* dst, const char* src)
{
	int idx = 0;
	//while ( src[idx] != '\0' ) {
	while ( src[idx] ) {              //while ( src[idx] != '\0' )可以简化为while ( src[idx] )
		dst[idx] = src[idx];
		idx++;
	}
	dst[idx] = '\0';
	return dst;
}
*/

/*
//指针版本的mycpy函数：
char* mycpy(char* dst, const char* src)
{
	char* ret = dst;
	//while ( *src != '\0' ) {
	while ( *src ) {
		*dst++ = *src++;
//		*dst = *src;
//		dst++;
//		src++;
	}
	*dst = '\0';
	return ret;
}
*/

/*
//指针版本的mycpy函数：（最终简化）
char* mycpy(char* dst, const char* src)
{
	char* ret = dst;
	while ( *dst++ = *src++ )  //注：*dst++ = *src++这个语句将他还原回去理解，他就是*src，所以我们可以将用来的*src替换成现在的*dst++ = *src++   //由此将这个while循环变成一个空循环
		;
	*dst = '\0';
	return ret;
}
*/

int main(int argc, char const *argv[])
{
	
	return 0;
}