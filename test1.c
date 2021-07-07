#include <stdio.h>


int main()
{
    double a,b,c;       //三角形三条边边长

    printf("请输入三角形三个边长:\n");
    scanf("%lf %lf %lf",&a,&b,&c);

    if((a+b>c)&&(a+c>b)&&(b+c>a)){
        printf("该三边可以构成三角形！！！\n");
        Triangle_Identify(a,b,c);
    }
    else{
        printf("该三边不可以构成三角形！！！\n");
    }
      
    return 0;
}
