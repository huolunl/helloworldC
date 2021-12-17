#include <stdio.h>


int functionPointer (int a){
	return a;
}

int parampointer(int (* func)(int)){
	return func(4);
}

int main(){
	int a = 1;
	int *b = 2;
	int *c;
	c = &a;
	printf("%p",&a);
	printf("%p",b);
	printf("%p",c);

	int *n = NULL; //空指针需要引入 stdio.h
	printf("%p",n);


	int (* f)(int) = &functionPointer; // 变量f为指针类型指向 一个函数; ,同样的，gaibianl
	printf("--------------------");
	printf("%d",f(3));
	printf("%d",parampointer(f));


}