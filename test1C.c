#include <stdio.h>

#include <math.h> //用到求平方函数sqrt()，所以要包含头文件<math.h>


int main(void) {


    // int dogs;
    // printf("How many dogs do you have?\n");
    // scanf("%d",&dogs);
    // printf("So you have %d dog(s)!\n",dogs);

    //定义多个变量

    int a = 1;
    int b = 2;
    int c = 1;

    double delta;
    double x1 , x2;

    delta = b * b - 4*a*c;
    if(delta >0){
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrtl(delta)) / (2 * a);
        printf("该一元二次方程有两个解,x1 = %f , x2 = %f \n",x1,x2);
        printf("该一元二次方程有两个解,x1 = %f , x2 = %f \n",x1,x2);

    }
    else if (0 == delta)
    {
        /* code */
        x1 = (-b) / (2*a);
        x2 = x1; //左边值赋给右边
        printf("该一元二次方程有一个唯一解,x1 = x2 = %f\n",x1);
    }
    else
    {
        printf("无解\n");
    }
    


    float m = 0.27,n=93.25;
    char p,q = '#';
    printf("默认格式: %f\n", m);



    int num;
    num = 1;

    printf("I am a simple");
    printf("computer.\n");
    printf("My favorite number is %d because it is first.\n",num);
    return 0;

}