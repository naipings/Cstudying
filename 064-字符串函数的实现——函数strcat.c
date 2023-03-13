/*
strcat：
		char *strcat(char *restrict s1, const char *restrict s2);
		把s2拷贝到s1的后面，接成一个长的字符串
		返回s1
		s1必须具有足够的空间
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* mycat(char *s1, char *s2)
{
	char *strings = (char*)malloc(strlen(s1)+strlen(s2)+1);
	strcpy(strings, s1);
	//printf("%s\n", strings);
	char *str = strings + strlen(s1);
	strcpy(str, s2);
	
	return strings;
	free(strings);
}

int main(int argc, char const *argv[])
{
	char s1[] = "hello";
	char s2[] = "world";
	char *p = strcat(s1, s2);
	printf("%s\n", p);
	printf("%s\n", mycat(s1, s2));
	
	return 0;
}