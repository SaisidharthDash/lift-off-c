#include<stdio.h>
int main()
{
    int a,b,i;
    printf("enter two. no.");
    scanf("%d%d",&a,&b);
    printf("enter operation to operate (1-addition ,2-substraction,3-multiplication,4-dision");
    scanf("%d",&i);
    switch(i){
        case-1:
        printf("addition of %d and %d is %d",a,b,a+b);
        break;
        case-2:
        printf("subtraction of %d and %d is %d",a,b,a-b);
        break;
        case-3:
        printf("multiplication of %d and %d is %d",a,b,a*b);
        break;
        case-4:
        printf("division of %d and %d is %d",a,b,a/b);
        break;
        default:
        printf("invalid input");
        break;
    }
        retun 0;
        }
