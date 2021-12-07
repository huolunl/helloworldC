#include <stdio.h>

main() //程序入口
{
//    f();
//    funcFor();
//    funcChar();
funcArray();
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

funcChar()
{
    int c; // int类型可以保存char类型数据
    putchar(EOF); // 打印字符 EOF 相当于mac上的control + d
    putchar('AA'); // 只会打印一个A
    printf("%d",'AA'); // 单引号表示字符常量， 值为对应的编码值
    while ((c = getchar()) != EOF) { //getchar接收来自键盘的输入
        putchar(c);
    }
}

funcArray()
{
    int c, i, nwhite, nother;
    int ndigit[10]; //数组声明  长度为10

    nwhite = nother = 0;
    for (i = 0; i<10; ++i)
        ndigit[i] = 0;
    while ((c=getchar()) != EOF) {
        if (c >= '0' && c<= '9') {
            ++ndigit[c-'0'];
        } else if (c == ' '||c== '\n' || c == '\t') {
            ++nwhite;
        } else {
            ++nother;
        }
    }
    printf("digits =");
    for (i=0;i<10;i++) {
        printf(" %d",ndigit[i]);
        printf(",white space = %d, other = %d\n",nwhite,nother);
    }
}

