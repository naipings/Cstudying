#include <stdio.h>

int amount[] = {1, 5, 6, 7, 8, 9, 16, 26, 35, 46, 48, 58, 60};

int search(int key, int a[], int length);

int main()
{  
    int key;
    printf("请输入一个数字：");
    scanf("%d", &key);
    int num = search( key, amount, sizeof(amount)/sizeof(amount[0]) ); //如果key在amount[]数组中，则搜索key在该数组中的位置
    if ( num != -1 ) {
    	printf("%d\n", num);
	} else {
		printf("没找到数字%d\n", key);
	}
    return 0;
}

int search(int key, int a[], int length)
{
	int ret = -1;
	int left = 0;
	int right = length - 1;  //数组下标的最大值等于该数组的个数减一
	while ( left <= right ) {
		int mid = (left+right)/2;
		if ( a[mid] == key ) {
			ret = mid;
			break;
		} else if ( a[mid] < key ) {
			left = mid + 1;
		} else {
			right = mid - 1;
		}
	}
	return ret;
}