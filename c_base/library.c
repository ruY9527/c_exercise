#include "library.h"
#include <stdio.h>
#include "operator.h"

void hello(void) {
    printf("Hello, World!\n");
}

/**
 * 基本类型：整型int/浮点型float/字符型char
 * 构造类型: 数组[]/结构体struct
 * 指针类型: *
 * 空类型:   void
 *
 * \n 换行
 * \b 退格
 * \\ 反斜杠
 */
#define PI 3+2
void baseTypePrint(){
    int i = PI * 2;
    printf("i=%d\n", i);

    char c = 'A';
    printf("%c\n", c + 32);
}

/**
 * 强制转化类型
 */
void constType(){
    int i = 5;
    float j = i/2;
    float k = (float) i / 2;
    // 2.000000
    printf("%f\n", j);
    // 2.500000
    printf("%f\n", k);
    // 做整数除法的时候,默认进行整除,要想得到小数,必须进行类型转换
    // prinf函数原理: 可以输出各种类型的数据,包括 整型，浮点，字符，字符串等；
    // 实际原理是将这些类型的数据格式化字符串后，放入标准的输出缓冲区，然后显示到屏幕上
}

/**
 * print 函数相关的输出操作
 */
void printInfo(){

    int i = 10;
    float f = 96.3;
    printf("student number=%3d score=%5.2f\n",i , f);
    printf("student number=%-3d score=%5.2f\n",i , f);
    printf("%10s\n", "hello");
    //student number= 10 score=96.30
    //student number=10  score=96.30
    //     hello

}

void scanfInfo(){
    int i = 10;
    char c;
    scanf("%d", &i);
    printf("%d\n", i);
    fflush(stdin);
    scanf("%c", &c);
    printf("c=%c\n", c);
}

void scanfManyTypes(){
    int i ,ret;
    char c;
    float f;
    // %c 之前需要加空格
    ret = scanf("%d %c%f", &i,&c,&f);
    printf("i=%d,c=%c,f=%5.2f\n",i,c,f);
}


int main(){
    // scanfManyTypes();
    // int restNum = baseOperator();
    // printf("restNum=%d", restNum);

    return 0;
}