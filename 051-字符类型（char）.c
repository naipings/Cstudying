//1.区分数字1和字符'1'。
/*
#include <stdio.h>

int main()
{
	
	char c;
	char d;
	c = 1;
	d = '1';  //d = 'A';
	if ( c == d ) {
		printf("相等\n");
	} else {
		printf("不相等\n");
	}
	printf("c=%d\n", c);
	printf("d=%d\n", d);
	
	return 0;
}
*/

/*char是一种整数，也是一种特殊的类型：字符。这是因为：
                                                     单引号表示的字符字面量：'a','1'
                                                     ''也是一个字符
                                                     printf和scanf里用%c来输入输出字符
*/

//2.字符的输入输出
/*如何 输入'1'这个字符给char c？
  利用：(1) scanf("%c", &c); ——>1
  		(2) int i;  scanf("%d", &i);  c=i; ——>49
  '1'的ASCII编码是49，所以（对第二种情况）当c==49时，它代表'1'	
  	printf("%i" %c\n", c,c);
  一个49各自表述！（它既可以是整数49；也可以是字符'1'）	
*/
#include <stdio.h>

int main()
{
	//char c;
	//scanf("%c", &c);
	
	int i;
	char c;
	scanf("%d", &i);
	c = i;
	
	printf("c=%d\n", c);  //变量c的整数值是多少
	printf("c='%c'\n", c);  //如果把变量c当作一个字符，那么它的值是多少
	
	if ( 49 == '1') {
	printf("OK\n");	
	}
	
	return 0;
}