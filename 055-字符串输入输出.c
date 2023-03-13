#include <stdio.h>

void f(void)
{
	char word[8];
    char word2[8];
    scanf("%7s", word);
    scanf("%7s", word2);
    printf("%s##%s##\n", word, word2);
}
//试试读入：123（回车）12345678（回车）     然后再试试： 12345678（回车）看看结果

int main()
{  
    //char word[8];
    //scanf("%s", word); //scanf读入一个单词（这里所谓的一个单词和是不是一个英文单词没有关系，它只是说读到空格、tab或回车为止）（到空格、tab或回车为止，并且不会包含空格、tab或回车）
    				   //但是这个scanf是不安全的，因为不知道要读入的内容的长度
    //安全的做法是：scanf("%7s", word);因为我们定义的字符串数组的长度是8，除开末尾的0，还剩7个长度的位置用来存放读入的字符串，所以使用%7s。这里的7会告诉scanf，它最多读入7个字符，剩下超出的部分，就不要了（对于这个%xs而言，就不要了）。
    				//在%和s之间的数字表示最多允许读入的字符的数量，这个数字应该比数组的大小小一，超过的内容（下面的内容）会交给下一个%s或者下一个scanf去阅读。
    				//此时，后面的空格有没有就没有关系了，因为它就不再是依据空格来区分单词了，而是根据这个个数来划定这个单词
	printf("%s##\n", word);
    
    f();
    
    return 0;
}

/*
常见错误：
char *string;
scanf("%s", string);

以为char*是字符串类型，定义了一个字符串类型的变量string就可以直接使用了
	由于没有对string初始化为0，所以不一定每次运行都出错。但是运行一旦出错时，程序就会崩溃。
	（因为string开始只是一个指针变量，由于没有将它初始化为0，并且string是一个本地变量，本地变量没有默认的初始值，所以它会指向系统的某一块内存位置）
	（当我们用scanf对string所指向的地址里面进行输入时，由于没有初始化，在进行读入时，可能这个地址所存放的东西都程序没有影响，所以程序就能正常运行）
	（但是，一旦当这个string所指向的地址里面存有对程序有影响的东西时，我们进行scanf读入操作就可能会导致程序崩溃）
	（这也就是，为什么这种程序在有些电脑上能够运行，换一些电脑就不能运行了）
*/	

/*
空字符串：
char buffer[100] = "";
	这是一个空的字符串，buffer[0] == '\0'
	
注意：	
char buffer[] = "";
	这个数组的长度只有1！（说明只有buffer[0]是有效的，buffer[1]就没有了，并且buffer[0]里面的内容就是0。所以这个数组里面放不下任何的字符串）
	所以这种定义方法是无效的
*/
	
