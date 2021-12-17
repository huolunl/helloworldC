// 全局变量会被自动化初始化
// 局部变量不会被自动初始化

int a; // 0
char b; //'\0'
float c; //0
double d; // 0

void main()
{
	printf("%d",a);
	printf("%c",b);

	printf("%f",c);
	printf("%f",d);

}
