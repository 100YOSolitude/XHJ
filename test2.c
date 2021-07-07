#include <stdio.h>

int main()
{
    double x,y;    

    printf("请输入二维坐标的两个数值:\n");
    scanf("%lf %lf",&x,&y);

    if((x==0)&&(y==0)){
        printf("该点为原点！！！\n");
    }
    else if ((x==0)&&(y!=0))
    {
        printf("该点在y轴上！！！\n");
    }
    else if ((x!=0)&&(y==0))
    {
        printf("该点在x轴上！！！\n");
    }
    else if ((x>0)&&(y>0))
    {
        printf("该点在第一象限！！！\n");
    }
    else if ((x<0)&&(y>0))
    {
        printf("该点在第二象限！！！\n");
    }
    else if ((x<0)&&(y<0))
    {
        printf("该点在第三象限！！！\n");
    }
    else
    {
        printf("该点在第四象限！！！\n");
    }   
    return 0;
}