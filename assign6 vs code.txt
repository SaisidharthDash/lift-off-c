#include<stdio.h>
int main()
{
    float r,d; 
    float ar,circ;
    printf("enter radius r");
    scanf("%f",&r);
    printf("\n");
    d=r/2;
    printf("diameter %f",d);
    printf("\n");
    circ=2*3.14*r;
    printf("circumference of circle is %f",circ);
    printf("\n");
    ar=3.14*r*r;
    printf("area of circle is %f",ar);
    printf("\n");
    return 0;
}