/*
#include <stdio.h>

int main()
{
	int x;
	int one, two, five;
	int exit = 0;
	
	scanf("%d", &x);
	for ( one = 1; one < x*10; one++ ) {
		for ( two = 1; two < x*10/2; two++ ) {
			for ( five = 1; five < x*10/5; five++) {
				if ( one + two*2 + five*5 == x*10) {
					printf("可以用%d个1角加%d个2角加%d个5角得到%d元\n", one, two, five, x);
					exit = 1;
					break;
				}
			}
			if ( exit ) break; //if里面的exit 相当于exit == 1  因为if里面的判断是：如果它不是0，它就是满足条件的    //接力break
		}
		if ( exit ==1 ) break; //接力break
	}
	
	return 0;
}
//没有上面的三个break语句，就可以实现输出多种凑硬币的方法；加上这三个break就只输出一种凑法
*/



/*
//可以将上面三个break语句换成goto语句，使得程序更简单
#include <stdio.h>

int main()
{
	int x;
	int one, two, five;
	int exit = 0;
	
	scanf("%d", &x);
	for ( one = 1; one < x*10; one++ ) {
		for ( two = 1; two < x*10/2; two++ ) {
			for ( five = 1; five < x*10/5; five++) {
				if ( one + two*2 + five*5 == x*10) {
					printf("可以用%d个1角加%d个2角加%d个5角得到%d元\n", one, two, five, x);
					exit = 1;
					goto out; // 对于goto语句： out是自己命名的标号，相当于一个地方，后面有一个冒号，goto要跳到out所指的地方去     //用goto语句代替接力break，所以goto语句特别适合在这种嵌套的、多重的循环中，要从最里面，跳到最外层时侯使用。
				}
			}
		}
	}
out: //out相当于一个地方	
	return 0;
}
//建议：goto只在这种嵌套的、多重的循环中，从最内层跳到最外层的时候使用，其他场合不要使用goto
*/