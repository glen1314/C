#include <stdio.h>

/*
 *整型：基本整型（int）、短整型（short int），长整型（long int）
 *浮点型：单精度型（float）、双精度型（double）
 *字符型（char）
 *指针类型
 *构造类型：数组（[]）、结构体（struct）
 *空类型（void）
 *
 */

int main(void) {
    
    // int dogs;
    // printf("How many dogs do you have?\n");
    // scanf("%d",&dogs);
    // printf("So you have %d dog(s)!\n",dogs);

    //定义多个变量
    // int a,b,c;
    // float m = 0.27,n=93.25;
    // char p,q = '#';
    // printf("默认格式: %f\n", m);



    int num;
    num = 1;

    printf("I am a simple");
    printf("computer.\n");
    printf("My favorite number is %d because it is first.\n",num);

    printf("start=========================整型=========================start\n");
    short i = 10;
    printf("%d\n",i);

    int a;
    short int b;
    long int c;

    float d;
    double e;

    char f;

    printf("int = %d\n",sizeof(a));
    printf("short int=%d\n",sizeof(b));
    printf("long int=%d\n",sizeof(c));
    printf("float=%d\n",sizeof(d));
    printf("double=%d\n",sizeof(e));
    printf("char=%d\n",sizeof(f));

    printf("int=%d\n",sizeof(int));
    printf("short int=%d\n",sizeof(short int));
    printf("long int=%d\n",sizeof(long int));
    printf("float=%d\n",sizeof(float));
    printf("double=%d\n",sizeof(double));
    printf("char=%d\n",sizeof(char));
    printf("stop=========================整型=========================stop\n");


    printf("start=========================常量=========================start\n");
    int g =  10;
    printf("整型：%d\n",g);
    float h = 7.5;
    printf("浮点型h=%f\n",h);
    printf("stop=========================常量=========================stop\n");
    return 0;



}