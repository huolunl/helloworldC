#include <stdio.h>

// 字符串就是一个 \0结尾的 char 数组

int main(){

	char str[] = {'a','b','c','\0'};
	char str2[] = "abc";  // 等价的定义方式
	printf(str2);
	printf(str);
	printf("%d",strlen(str)); // 内置函数 str的长度

}