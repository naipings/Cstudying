#include <stdio.h>

int search(int Hnum[], int Lnum[], int length); 

int main()
{  
	const int n = 4;
    //int A[n][n];
    //int A[4][4] = {{1, 7, 4, 1},{4, 8, 3, 6},{1, 6, 1, 2},{0, 7, 8, 9}};
    //int A[4][4] = {{7, 5, 1, 0},{5, 8, 4, 3},{9, 2, 0, 4},{6, 4, 2, 1}};  //NO
    int A[4][4] = {{1, 1, 5, 5},{4, 9, 6, 6},{5, 0, 1, 8},{2, 6, 5, 5}};  //看究竟是哪个5
    
    int numOfH1=0, numOfH2=0;
	int numOfL1=0, numOfL2=0;
	//int Hnum[] = {};    // 7 8 6 9 
	//int Lnum[] = {};    // 1 6 1 1
	int Hnum[4];    // 7 8 6 9 
	int Lnum[4];    // 1 6 1 1
	
	int num;
	int length = 4;
    					
    int i=0, j=0;
//    for ( i=0; i<n; i++) {
//		for ( j=0; j<n; j++) {
//			scanf("%d ", &A[i][j] );
//		}
//	} //读入矩阵
	
	//检查行
	for ( i=0; i<n; i++ ) {
		for ( j=0; j<n; j++ ) {
			if ( A[i][j] > A[numOfH1][numOfL1] ) {
				numOfH1 = i;
				numOfL1 = j;		
			}
		}
		Hnum[i] = numOfL1;
	}
	
	for ( i=0; i<sizeof(Hnum)/sizeof(Hnum[0]); i++) {
		printf("Hnum[]中的数：");
		printf("%d ", Hnum[i]);
	} //调试用
	
	
	//检查列
	for ( j=0; j<n; j++) {
		for ( i=0; i<n; i++ ) {
			if ( A[i][j] < A[numOfH2][numOfL2] ) {
				numOfH2 = i;
				numOfL2 = j;		
			}
		}
		Lnum[j] = numOfH2;
	}
	
	for ( i=0; i<sizeof(Lnum)/sizeof(Lnum[0]); i++) {
		printf("Lnum[]中的数：");
		printf("%d ", Lnum[i]);
	} //调试用
	
	//找到鞍点
	num = search(Hnum, Lnum, length);

	if ( num > -1) {
    //回到数组匹配鞍点位置
		for ( i=0; i<n; i++ ) {
			for ( j=0; j<n; j++ ) {
				if ( num == A[i][j] ) {
					numOfH1 = i;
					numOfL1 = j;
					break;	
				}
			}
		}
			
    //打印鞍点位置
    printf("%d %d\n", numOfL1, numOfH1 );	//先行号，再列号
	} else {
		printf("NO\n");
	}

    return 0;
}

int search(int Hnum[], int Lnum[], int length) 
{
	int ret = -1;
	for ( int k=0; k<length; k++ ) {
		for ( int t=0; t<length; t++ ) {
			if ( Hnum[k] == Lnum[t] ) {
    			ret = Hnum[k];
    			break;
			}
		}
	}
	return ret;
}

/*
有些情况不适用，如：
1 1 5 5     检查行时，找到两个5
4 9 6 6
5 0 1 8
2 6 5 5     检查列时，又找到两个5，这里面第二个5怎么实现和上面的第二个5对应
？？——>在putty里面确实输出的是0 3
0 3

注意：检查行得到Hnum[]={5, 
	   检查列得到Hnum[]={

*/
