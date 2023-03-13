#include <stdio.h>

int a[] = {};
int b[] = {};

int plus(int a[], int b[], int lena);
int max(int a[], int len);

int main()
{  	
	int result = -1;
  	for ( int i=0; result==-1; i++ ) {
		scanf("%d %d", &a[i] , &b[i] );
		if ( a[i] == 0 ) {
			result = 0;
		} else if ( a[i] > 100 ) {
			printf("程序最大能处理的幂次是100");
			return -1;
		}	
	} 
	//读入多项式1
	
	for ( int i=0; result==-1; i++ ) {
		scanf("%d %d", &a[i] , &b[i] );
		if ( a[i] == 0 ) {
			result = 0;
		} else if ( a[i] > 100 ) {
			printf("程序最大能处理的幂次是100");
			return -1;
		}	
	} 
	//读入多项式2	
		
	//获取并存储当a中幂次一样时，b中相应的系数之和，然后让a，b中相关幂次为0
	int lena = sizeof(a)/sizeof(a[0]);
	//int lenb = sizeof(b)/sizeof(b[0]);
	int num = 0;
	int cmp = 0;
	int c[] = {};
	int d[] = {};
	for ( int i=0; i<lena; i++ ) {
		num = plus(a,b,lena);
		c[i] = num;
		d[i] = cmp;
	}
	
	//处理a，b数组中剩余的数据
	for ( int i=0; i<lena; i++ ) {
		if ( a[i] != 0 && b[i] != 0 ) {
			
		}
	}
	
	//从低到高排序d数组，同时注意对应的c数组里面的值的下标也要跟着改变
	int lend = sizeof(d)/sizeof(d[0]);
	for ( int i=lend-1; i>0; i-- ) {
    	int maxid = max(d, i+1);
    	
    	int td = d[maxid];
    	d[maxid] = d[i];
    	d[i] = td;
	
		int tc = c[maxid];
		c[maxid] = c[i];
		c[i] = tc;
	}
	
	//开始按从高到低的幂次输出多项式
	for ( int i=lena; i>0; i-- ) {
		printf("%d*%d", b[i], a[i]);
		
		if ( i > 1) {
			printf("+");
		}
	}
	
    return 0;
}

int plus(int a[], int b[], int lena)
{
	int ret;
	int cmp;
  	for ( int i=0; i<lena; i++ ) {
		for (int j=0; j<lena; j++ ) {
			 if ( a[i] == a[j] && b[i] != 0 && b[j] != 0 ) {
			 	ret = b[i] + b[j];
			 	cmp = a[i];
			 	a[i] = 0;
			 	a[j] = 0;
			 	b[i] = 0;
			 	b[j] = 0;
			 	break;
			 }
		}
		break;		
	}
	return ret;
	return cmp;
}

int max(int a[], int len)
{
	int maxid = 0;
	for ( int i=1; i<len; i++ ) {
		if ( a[i] > a[maxid] ) {
			maxid = i;
		}
	}
	return maxid;
}