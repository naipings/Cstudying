#include <stdio.h>

//寻找数组中最大的数的下标
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

//找到最大的数过后，我们希望做一个交换，即：把这个最大的数交换到数组最后面去（swap a[maxid],a[len-1]）

int main()
{  
    int a[] = {2,45,6,12,87,34,90,24,23,11,65};
    int len = sizeof(a)/sizeof(a[0]);
    
    //选择排序
    //每轮过程中，找到a[]数组中最大的值，并将其交换到数组的左侧，然后数组最大下标减一（避免下次找最大值时，把已经找到的最大值再找一次），最终实现将该数组里面的值，从小到大排序
    for ( int i=len-1; i>0; i-- ) {
    	int maxid = max(a, i+1);
    	//swap a[maxid],a[len-1]
    	int t = a[maxid];
    	a[maxid] = a[i];
    	a[i] = t;
	}
	
	//调试用，遍历输出a[]数组的值，看是否实现上述效果
	for ( int i=0; i<len; i++ ) {
		printf("%d ", a[i]);
	}
    
    
    
    //printf("%d\n", maxid);
    
    return 0;
}