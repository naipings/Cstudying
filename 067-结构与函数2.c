/*
输入结构：
没有直接的方式可以一次scanf一个结构
如果我们打算写一个函数来读入结构
	——>
*/
//试着输入两个整数看看
#include <stdio.h>

struct point {
	int x;
	int y;
};	

void getStruct(struct point);
void output(struct point);

int main(int argc, char const *argv[])
{
	struct point y = {0, 0};
	getStruct(y);
	output(y);  //说明在getStruct函数里面没有改变y本身的值，y仍然是0,0
				//也说明在getStruct函数里面的结构变量p，开始只是拥有和结构变量y一样的值，但他们两个本身没有任何关系。这一点和数组完全不一样。
}

void getStruct(struct point p)
{
	scanf("%d", &p.x);
	scanf("%d", &p.y);
	printf("%d, %d\n", p.x, p.y);
}

void output(struct point p)
{
	printf("%d, %d\n",p.x, p.y);
}

/*
但是读入的结构如何送回来呢？
记住C在函数调用时是传值的
	所以函数中的p与main中的y是不同的
	在函数读入了p的数值以后，没有任何东西回到main，所以y还是{0, 0}

解决的方案：
之前的方案，把一个结构（实际上是该结构的值）传入了函数，然后在函数中操作，但是没有返回回去
	问题在于传入函数的是外面那个结构的克隆体，而不是指针
		传入结构和传入数组是不同的

1.在这个输入函数中，完全可以创建一个临时的结构变量，然后把这个结构返回给调用者
	（注：这种方案没有使用结构指针好，此方案需要进行两个结构之间的拷贝，但是如果使用结构指针的话，就不需要进行拷贝了，直接利用指针的性质就可以实现了）
void main()
{
	struct point y = {0, 0};
	y = inputPoint();
	output(y);
}

struct point inputPoint()
{
	struct point temp;
	scanf("%d", &temp.x);
	scanf("%d", &temp.y);
	return temp;
}
*/

#include <stdio.h>

struct point {
	int x;
	int y;
};	

struct point getStruct(void);
void output(struct point);

int main(int argc, char const *argv[])
{
	struct point y = {0, 0};
	y = getStruct();  //此时，就可以实现改变结构变量y里面的值了（通过两个结构变量之间可以进行赋值运算这个方法来实现）
	output(y);
}

struct point getStruct(void)
{
	struct point p;
	scanf("%d", &p.x);
	scanf("%d", &p.y);
	printf("%d, %d\n", p.x, p.y);
	return p;
}

void output(struct point p)
{
	printf("%d, %d\n",p.x, p.y);
}