#include <stdio.h>
int main()
{  
    int a,b;
    scanf("%d/%d",&a,&b);
     
    const int number=200;
    int count[number];
    int i,cnt=0;
    for(i=0;i<number;i++){
        count[i]=0;
    }
    
    int divisor=0,remainder=1;
    a*=10;
    for(i=0;i<200;i++){
        if(remainder!=0){
            remainder=a%b;
            divisor=a/b;
            count[i]=divisor;
            a=remainder*10;
            cnt++;//为了不输出最后一位后面的0 
        }else{
            break;
        }
    }
    

    printf("0.");
    for(i=0;i<cnt;i++){
        printf("%d",count[i]);
    }
    
    return 0;
}
//网上最初找的源码（为了参考如何输出有限不循环小数）。