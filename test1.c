#include <stdio.h>

void Triangle_Identify(double a,double b,double c)
{
    double temp;      

    if(a<b){//完成a和b值的交换,a里面放最大值
        temp=a;a=b;b=temp;
    }
    if(a<c){//完成a和c值的交换,a里面放最大值
        temp=a;a=c;c=temp;
    }
    if(b<c){//完成b和c值的交换,a里面放最大值
        temp=b;b=c;c=temp;
    }
    if((a*a)<(b*b+c*c)){     //若最大边平方小于另外两边平方和，则该三角形为锐角三角形
        if((a==b)&&(a==c)&&(b==c))
        {
            printf("该三角形为等边三角形！！！\n");
        }
        else if((a==b)||(a==c)||(b==c))
        {
            printf("该三角形为等腰锐角三角形！！！\n");
        }
        else
        {
             printf("该三角形为锐角三角形！！！\n");
        }  
    }
    if((a*a)==(b*b+c*c)){     //若最大边平方小于另外两边平方和，则该三角形为锐角三角形
        if((a==b)||(a==c)||(b==c)){
            printf("该三角形为等腰直角三角形！！！\n");
        }else{
            printf("该三角形为直角三角形！！！\n");
        }
    }
    if((a*a)>(b*b+c*c)){     //若最大边平方小于另外两边平方和，则该三角形为锐角三角形
        if((a==b)||(a==c)||(b==c))
        {
            printf("该三角形为等腰钝角三角形！！！\n");
        }
        else
        {
            printf("该三角形为钝角三角形！！！\n");
        }
        
    }
}

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