#include <stdio.h>

int number[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, };
char *pingying[] = {"ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu" };

int search(int key, int a[], int length);

int main()
{
	int x;
	scanf("%d", &x);
	
	if ( x < 0 && x >= -100000 ) {
		printf("fu ");
		x=-x;		
	}

	int mask = 1;
	int t = x;
	while( t>9 ) {
		t/=10;
		mask *= 10;
	}
	//printf("%d", mask); //调试用
	//求位数
	
	do {
		int d = x / mask;
		int k = search(d, number, sizeof(number)/sizeof(number[0]));
		printf("%s", pingying[k]);
		
		if ( mask > 9 ) {
			printf(" ");
		}
		x %= mask;
		mask /= 10;
	} while ( mask > 0 );
	printf("\n");
	
			
	return 0;
}


int search(int key, int a[], int length)  //数组作为参数时，往往必须再用另一个参数来传入数组的大小。如本题的length（length的大小，见函数的调用那里）。  原因：数组作为函数的参数时：1.不能在[]中给出数组的大小  2.不能再利用sizeof来计算数组的元素个数。
{
	int ret = -1;
	int i;
	for ( i=0; i<length; i++ ) {
		if ( a[i] == key) {
			ret = i;
			break;
		}
	}
	return ret;
}



