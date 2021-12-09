#include <stdio.h>

//变量名 小写
//常量名 大写

//数据类型及长度
// char 字符 一个字节， 可存放本地字符集中的一个字符 unsigned(无符号值为 0-255 signed值为-128---127
// int 整型
// short 16位
// long 32位
// float
// double
void funcVerb()
{
// 变量声明
	int  i,j,k;
	// 变量声明并且初始化
	int d = 3;
	extern int e; // 声明变量来自外部
	printf("%d，%d,%d",i,d,e);
}
int e = 100;

#define LENGTH 10
void funcConst()
{	
	// LENGTH = 20; //常量不能修改
	printf("%d",LENGTH);
	// 声明常量
	const int c = 10;
}

int main()
{
	// funcVerb();
	funcConst();
}
