#include<stdio.h>
int main()
{
    int n;
    printf("enter a no");
    scanf("%d",&n);
    if(n>0){
     printf("enter no is a positive no.");
    }
    else if (n==0){
     printf("enter no. is 0");
    }
     else if(n<0){
     printf("enter no. is a negative no.");
    }
    return 0;
}
