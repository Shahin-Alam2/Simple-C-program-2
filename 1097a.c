#include<stdio.h>
int main()
{
    int a=7,i,j;
    for(i=1;i<=9;i=i+2){
        for(j=0;j<3;j++){
            printf("I=%d J=%d\n",i,a);
            a=a-1;
        }
        a=a+5;
    }
    return 0;
}
