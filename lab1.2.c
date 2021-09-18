#include <stdio.h>
int find_d(float x1, float y1, float x2, float y2, float x3, float y3)
{
    float d=0;
    d = (x3-x1)*(y2-y1)-(y3-y1)*(x2-x1);
    return d;
}
int main()
{
    float x1=0, y1=0, x2=0, y2=0, x3=0, y3=0, x4=0, y4=0, x5=0, y5=0, x6=0, y6=0, xt=0, yt=0;
    float AB=0, BC=0, CA=0, d1=0, d2=0, d3=0;
    printf("Input A:\n");
    scanf("%f", &x1);
    scanf("%f", &y1);
    printf("Input B:\n");
    scanf("%f", &x2);
    scanf("%f", &y2);
    printf("Input C:\n");
    scanf("%f", &x3);
    scanf("%f", &y3);
    printf("Input point:\n");
    scanf("%f", &xt);
    scanf("%f", &yt);

    AB=find_d(x1,y1,x2,y2,xt,yt);
    BC=find_d(x2,y2,x3,y3,xt,yt);
    CA=find_d(x3,y3,x1,y1,xt,yt);
    d1=find_d(x1,y1,x2,y2,x3,y3);
    d2=find_d(x1,y1,x3,y3,x2,y2);
    d3=find_d(x3,y3,x2,y2,x1,y1);
    if ((x1==x2 && y1==y2) || (x2==x3 && y2==y3) || (x3==x1 && y3==y1))
    {
        printf("There is no rectangle");
    }
    else if ((d1==0) || (d2==0) || (d3==0))
    {
        printf("There is no rectangle");
    }
    else
    {
        if ((AB>0) && (BC>0) && (CA<0))
            printf("4 sector");
        else if ((AB>0) && (BC<0) && (CA>0))
            printf("2 sector");
        else if ((AB<0) && (BC<0) && (CA>0))
            printf("1 sector");
        else if ((AB>0) && (BC<0) && (CA<0))
            printf("3 sector");
        else if ((AB<0) && (BC>0) && (CA<0))
            printf("5 sector");
        else if ((AB<0) && (BC>0) && (CA>0))
            printf("6 sector");
        else if ((AB>0) && (BC>0) && (CA>0))
            printf("7 sector");
        else if(AB==0 || BC==0 || CA==0)
            printf("8 sector");
    }
    return 0;
}

