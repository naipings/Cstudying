#include <stdio.h>

int main()
{
	//一.定义变量及输入
    int num[101] = {0}; //初始化为0，因为次幂最大为100，所以在让下标作为次幂时，要把num[100]这个元素包括进去，所以数组长度101
    int a, b;
    int j = 2;
    int i;
    int flag = 0;
    for (; j > 0; j--)//循环两次输入多项式
    {
        do
        {
            scanf("%d %d", &a, &b);
            num[a] += b;    //用下标作为次幂，数组num的元素的值作为系数。当两次输入多项式有相同的次幂时，让系数相加
        } while (a != 0);
    }
    
    //二.遍历num数组，判断条件输出语句
    for (i = 100; i >= 0; i--)//遍历数组，从大到小
    {
        if (num[i] > 1 || num[i] < -1)//当系数不为0或1、-1时
        {
            if (i == 0)//次幂为0
            {
                printf("%d", num[i]);
            }
            else if (i == 1)//次幂为1
            {
                printf("%dx", num[i]);
                flag = 1;
            }
            else if (i > 1)//次幂大于1
            {
                printf("%dx%d", num[i], i);
                flag = 1;
            }
        }
        else if (num[i] == 1)//当系数为1,则要注意系数±1的绝对值不显示
        {
            if (i == 0)//次幂为0
            {
                printf("1");
            }
            else if (i == 1)//次幂为1
            {
                printf("x");
                flag = 1;
            }
            else if (i > 1)//次幂大于1
            {
                printf("x%d", i);
                flag = 1;
            }
        }
        else if (num[i] == -1)//当系数为-1,则要注意系数±1的绝对值不显示
        {
            if (i == 0)//次幂为0
            {
                printf("-1");
            }
            else if (i == 1)//次幂为1
            {
                printf("-x");
                flag = 1;
            }
            else if (i > 1)//次幂大于1
            {
                printf("-x%d", i);
                flag = 1;
            }
        }
        else if (num[i] == 0 && i == 0)//当次幂和系数都为0，要输出0
        {   
            if(flag) { //当0次幂前有系数不为0的次幂，则在前加上+号(因为是次幂从大到小输出，当0次幂前的所有次幂的系数都为0，则flag默认为0)  // if(flag)表示flag为真时执行后续语句（即flag为非零的时候，也就是flag==1时)
            	printf("+");
            }
            printf("0");
        }
        
        //三.在后面添加“＋”号
        if (flag && num[i - 1] > 0)//当flag为1且该次幂的下一个次幂的系数不为0和负数，在后面加上＋号
        {      //---------------第一种①num[i-1]>0----------------第二种②num[i-1]>=0
            printf("+");
        }
    }
    return 0;
}