#include<stdio.h>
int main()
{
    int n,r,i=0;
    printf("enter a no.");
    scanf("%d",&n);
    do{
    r=n%10;
    n=n/10;
    i=i+r;
    }
    while(n!=0);
    printf("sum of enter no is %d",i);
    return 0;
}
