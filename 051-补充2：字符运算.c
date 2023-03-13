#include <stdio.h>

int main()
{	
	char c = 'A';
	//c++;
	//c+=2;
	printf("%c\n", c);
	
	int i = 'Z' - 'A';
	printf("%d\n", i);
	
	return 0;
}
//一个字符加一个数字得到ASCII码表中那个数之后的字符
//两个字符的减，得到它们在表中的距离

/*
大小写转换：
字母在ASCII表中是顺序排列的
大写字母和小写字母是分开排列的，并不在一起
'a'-'A'可以得到两段之间的距离，于是：
                                    a+'a'-'A'可以把一个大写字母变成小写字母，  //这里的第一个a是一个char类型的变量，用于读入用户需要转换的大写字母
                                  而a+'A'-'a’可以把一个小写字母变成大写字母    //同理，这里的第一个a是一个char类型的变量，用于读入用户需要转换的小写字母
*/

/*
//使用示例：
#include <stdio.h>

int main()
{	
	char c;
	char a;
	printf("请输入一个大写字母：");
	scanf("%c", &a);
	c = a + 'a' -' A';
	printf("%c\n", c);
	
	return 0;
}
*/