#include <stdio.h>
#include <math.h>
#include <string.h>

int main()	
{
    int number;
    int x;
    int n = 0;
    int digit = 0;
    int t=0;
    int ret = -1;
    int tmp = 0;
    int count = 0;
    scanf("%d", &number);
    
    x = number;
   do {
		n++;
		x /= 10 ;
	} while( x>0 );
	//printf("%d 是%d位数\n", x, n );
    
    while (number>=0 && number<=1000000 && t<n)
    {
		digit = number % 10;
        ret++;
        t++;
        number = (number - digit)/10;
        
        if(digit%2== t%2)
        {
            tmp = pow(2,ret);
            //printf("%d\n", tmp);
        }
        else if(digit%2 != t%2)
        {
            tmp = 0;
        }
        
        count += tmp;
        
      //printf("digit=%d  number=%d  count=%d\n",digit, number, count);
    }
    
    printf("%d", count);
    
    return 0;
}