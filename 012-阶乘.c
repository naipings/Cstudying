/*
#include <stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	
	int fact = 1;
	
	while (n > 1) {
	fact = fact * n;
	n--;
	}
	
	printf("%d\n",fact);
	
	return 0;
	
}
*/

/*
//比较：
#include <stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	int fact = 1;

	int i = 1;

	while (i <= n) {
	fact = fact * i;
	i++;
	}
	printf("%d!=%d\n",n,fact);	
	return 0;

}
*/
/*
//再比较：
#include <stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	int fact = 1;

	for (int i=2; i<=n; i++) { //int i =1; or int i = 2;都没有问题。 但是在for循环里面填写int i =  只能在满足c99的编译器下面执行。
		fact *= i;
	}

	printf("%d!=%d\n",n,fact);

	return 0;

}
*/
/*
//再比较：
#include <stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	int fact = 1;

	int i =n;
	for (; n>1; n--) {  //for循环的三个条件都是可以省略的，但是就算是省略了其中一个表达式，那个表达式最后的分号也不能省略（特指前面两个表达式，因为第三个表达式后面本身就没有分号）
		fact *= n;
	}

	printf("%d!=%d\n",i,fact);

	return 0;

}
*/















