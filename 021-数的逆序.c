#include <stdio.h>

int main()
{
	int x;
	scanf("%d", &x);
	
	int digit;
	int ret = 0;
	
	while ( x>0 ) {
	digit = x%10; //每次取出x的最右边那位数（即：从个位开始依次取出x的每个数位上的数字）
	//printf("%d", digit); //用于将700，输出成007这样的数字
	ret = ret*10 + digit; //用于最后得到x的逆序数字（ret = ret*10 + digit实现将x的各个位数逆序）
	//printf("x=%d, digit=%d, ret=%d\n", x, digit, ret); //调试用，用于将700，输出成7这样的数字
	x /= 10; //取出数字后，删去已取出最右边数字
	}
	//printf("%d", ret); //用于将700，输出成7这样的数字
	
	return 0;
}
