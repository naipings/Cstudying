#include <stdio.h>

int main()
{
	const int NUM = 200;
	int cet[NUM];
	int a, b;
	int cnt=0;
	int cmp=1;	
	int i = 0;
	int j = 0;
	
	scanf("%d/%d", &a, &b);
	for( i=0; i<NUM; i++ ) {
        	cet[i]=0;
    	}                //这段代码可以直接在前面用 int cet[NUM]={0}; 代替，它们的效果一样     
    
	for ( i=0; i<NUM; i++ ) {
		if ( cmp != 0 ) {
		cet[i] = a*10/b;
		cmp = a*10%b;
		a = cmp;
		cnt++; 
		} else {
			break;
		}								
	}
		
	printf("0.");	
	for ( j=0; j<cnt; j++ ) { 
				printf("%d", cet[j]);
			}

		
	return 0;
}
//针对039.1的代码，进行了一部分精简过后（并且没有改变细节，只是删除了一部分代码），就通过了题目的要求。 