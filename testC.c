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

//全局变量
int b = 20;


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
    // short i = 10;
    // printf("%d\n",i);

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

    printf("start=========================ASCII=========================start\n");
    // char ch = ' A';
    // printf("ch = %d\n",ch);
    
    printf("stop=========================ASCII=========================stop\n");

    printf("start=========================变量=========================start\n");
    /*定义多个变量*/
    int i ,j;
    /*变量只能在程序的开头定义，或者说变量定义的前面不能有其他非声明或非定义的语句*/
    i = 3;
    printf("i = %d\n",i);

    printf("stop=========================变量=========================stop\n");

    printf("start=========================变量和常量的概念=========================start\n");
    //变量分为：局部变量、全局变量
    short age = 20;
    int high = 180;
    float weight = 88.5;

    a = -10;
    unsigned b1 = 5;
    if ((a+b1)>0) {
        printf("Hello\n");

        i = 10;
        printf("%d\n",i);   //%d是输出控制符，d表示十进制，后面的i是输出参数

        int i1 = 10;
        int i2 = 3;
        printf("%d,%d\n",i1,i2);
        printf("i1=%d,i2=%d\n",i1,i2);
        printf("Hello World!\n");

        //%x：以十六进制形式输出整数
        int i3 = 47;
        printf("%x\n",i3);
        printf("%X\n",i3);
        printf("%#x\n",i3);
        printf("%#X\n",i3);

    }
    printf("stop=========================变量和常量的概念=========================stop\n");
    return 0;





}