#include <stdio.h>

int amount[] = {1, 5, 10, 25, 50}; //美元里面的数值
char *name[] = {"penny", "nickel", "dime", "quarter", "half-dollar"}; //上面相应的每个美元数值对应的英文单词（1美分，5美分，10美分，25美分，50美分）

int search(int key, int a[], int length) 
{
	int ret = -1;
	for ( int i=0; i<length; i++ ) {
		if ( key == a[i] ) {
			ret = i;
			break;
		}
	}
	return ret;
}

int main()
{  
    int k = 13;
    int r = search(k, amount, sizeof(amount)/sizeof(amount[0]));
    if ( r > -1) {
    	printf("%s\n", name[r]);
	} else {
		printf("没找到对应单词\n");
	}
   
    return 0;
}
//通过两个数组的对应下标的关系来找到数字与单词的关系————此方法并不严谨，因为两个数组之间的关系并不密切。