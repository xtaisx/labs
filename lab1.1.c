#include <stdio.h>
int find_d(float x1, float y1, float x2, float y2, float x3, float y3)
{
    float d=0;
    d = (x3-x1)*(y2-y1)-(y3-y1)*(x2-x1);
    return d;
}
void print_above()
{
    printf("Point is above the line");
}
void print_below()
{
    printf("Point is below the line");
}
void print_on()
{
     printf("Point is on the line");
}
void print_left()
{
     printf("Point is on the left(below) from the line");
}
void print_right()
{
     printf("Point is on the right(above) from the line");
}
int main()
{
    float x1=0, y1=0, x2=0, y2=0, x3=0, y3=0;
    float res=0;
    printf("Input A:\n");
    scanf("%f", &x1);
    scanf("%f", &y1);
    printf("Input B:\n");
    scanf("%f", &x2);
    scanf("%f", &y2);
    printf("Input point:\n");
    scanf("%f", &x3);
    scanf("%f", &y3);
    if (x1==x2 && y1==y2)
    {
        printf("There is no line");
    }
    else if (y1!=y2 && x1!=x2)
    {
        res=find_d(x1,y1,x2,y2,x3,y3);
        printf("%f", res);
        if (res>0)
            print_right();
        else if (res==0)
            print_on();
        if (res<0)
            print_left();
    }
    else if (y1==y2)
    {
        if (y3>y1)
            print_above();
        else if (y3<y1)
            print_below();
        else
            print_on();
    }
    else if (x1==x2)
    {
        if (x3>x1)
            print_right();
        else if (x3<x1)
            print_left();
        else
            print_on();
    }
    return 0;
}
