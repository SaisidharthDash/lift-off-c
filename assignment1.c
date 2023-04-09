#include<stdio.h>
int main ()
{
int i;
for(i=1;i<=100;i++){
if(i%3==0){
    printf("%s","fizz");
}
else if(i%5==0){
    printf("%s","buzz");
}
else{
    printf("%d",i);
}
}
return 0;
}
