/*
strcmp：
int strcmp(const char *s1, const char *s2);
比较两个字符串，返回：
	0：s1==s2
	1：s1>s2
   -1：s1<s2
*/


#include <stdio.h>
#include <string.h>

int mycmp(const char* s1, const char* s2)
{
	int idx = 0;
//	while ( 1 ) {  //将whlie循环里面的语句条件，改写入while循环的条件时，我们可以简化我们的代码了。即：将1改成s1[idx] == s2[idx] && s1[idx] != '\0'
	while ( s1[idx] == s2[idx] && s1[idx] != '\0' ) {
//		if ( s1[idx] != s2[idx] ) {
//			break;
//		} else if ( s1[idx] == '\0' ) {  //为什么只用写s1[idx] == '\0' 因为else if指s1[idx] == s2[idx]的情况，所以s1[idx] == '\0'也就意味着s2[idx] == '\0'
//			break;
//		}
		idx ++;
	}
	return s1[idx] - s2[idx];
}

/*
在上面的基础上，更进一步简化mycmp函数：（我们还想去除变量idx）
int mycmp(const char* s1, const char* s2)
{
	while ( *s1 == *s2 && *s1 != '\0' ) {
		s1++;
		s2++;
	}
	return *s1 - *s2;
}
*/

int main(int argc, char const *argv[])
{  
    char s1[] = "abc";
    //char s2[] = "abc";
    //char s2[] = "bbc";
    //char s2[] = "Abc";  //注：在其他有些编译器上，当两个数组不相等时，用strcmp函数后，输出的是第一个数组减去第二个数组的差值，而并不仅仅是1或-1
    char s2[] = "abc ";
    printf("%d\n", strcmp(s1,s2));
    printf("%d\n", mycmp(s1,s2));
    //printf("%d\n", 'a'-'A');
    
    return 0;
}