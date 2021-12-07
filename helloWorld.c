#include <stdio.h>

main() //程序入口
{
//    f();
    funcFor();
}

f()
{
    int fahr, celsius; // 声明int变量 16位整型
    int lower, upper,step;
    float f; //32位浮点
    char c;     // 字符， 一个字节
    short s; // 短整型
    long l; // 长整型
    double d; // 双精度浮点
    printf("%d",fahr); // 无零值 什么都不打印
    lower = 0;
    upper = 300;
    step = 20;
    fahr = lower;
    while (fahr <= upper) { // 直到条件不满足跳出循环
        celsius = 5 * (fahr -32) / 9;
        printf("%3d\t%3d\n",fahr,celsius);
        fahr = fahr + step;
    }
}

funcFor()
{
    int fahr;
    for (fahr = 0; fahr <= 300; fahr = fahr + 20)   // for 循环后面没用大括号
        printf("%3d %6.1f\n",fahr,(5.0/9.0)*(fahr - 32));
}
