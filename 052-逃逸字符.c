#include <stdio.h>

int main()
{  
    
    //printf("123\b\n456\n");  //注：\b表示回退一格
    
  	//printf("123\bA\n456\n");
  	
  	//printf("123\t456\n");  //注：\t表示到下一个表格位（制表位）
  	//printf("12\t456\n");
   
   	printf("123\"456\"789\n");
   
    return 0;
}
/*
逃逸字符：
	\b	回退一格
	\t	到下一个表格位（制表位）
	\n	换行
	\r	回车
	\"	双引号
	\'	单引号
	\\	反斜杠本身
*/