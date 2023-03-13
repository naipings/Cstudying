/*
有何不同？
scanf("%d %c", &i, &c);
scanf("%d%c", &i, &c);
*/
#include <stdio.h>

int main()
{
	int i;
	char c;
	//scanf("%d %c", &i, &c);  //先试试输入：12 1     再试试输入：12a     再试试输入：12  1
	//printf("i=%d, c=%d, c='%c'\n", i,c,c);
	
	scanf("%d%c", &i, &c);  //先试试输入：12 1     再试试输入：12a     再试试输入：12  1
	printf("i=%d, c=%d, c='%c'\n", i,c,c);  //第一次得到了32和' '，而空格的ASCII编码就是32，因此我们得到空格（通过i=12, c=32, c=' '中的c=32, c=' '就可以体现出来）。  第二次得到的答案，和第一种读入方法的第二次得到的答案一样。  
	
	return 0;
}