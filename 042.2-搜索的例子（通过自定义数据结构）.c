#include <stdio.h>

struct {
	int amount;
	char *name;
} coins[] = {
	{1, "penny"},
	{5, "nickel"},
	{10, "dime"},
	{25, "quarter"},
	{50, "half-dollar"}
};

int main()
{  
    int k = 13;
    for ( int i=0; i<sizeof(coins)/sizeof(coins[0]); i++ ) {
    	if ( k == coins[i].amount ) {
    		printf("%s\n", coins[i].name);
    		break;
		}
	}
    
    return 0;
}
//通过自定义数据结构来绑定两个数组，进而建立一种对应关系，最终用来寻找例子中数字对应的单词。