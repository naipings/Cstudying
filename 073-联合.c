#include <stdio.h>

typedef union {
	int i;
	char ch[sizeof(int)];
} CHI;

int main(int argc, char const *argv[])
{
	CHI chi;
	int i;
	chi.i = 1234;  //其16进制数为0x04D2 
	for ( i=0; i<sizeof(int); i++ ) {
		printf("%02hhX", chi.ch[i]);
		//printf("\n");
	}
	printf("\n");
	
	return 0;
}
//这是一个非常常见的用union的场合，通过这种方式可以得到一个整数内部的各个字节，同样的我也可以通过这种方式得到一个double内部的字节，一个float内部的字节 
//当我们要做文件操作的时候，当我们要把一个整数以二进制的形式写到一个文件里头去的时候，这就是我们可以用来做读写的一个中间的媒介。