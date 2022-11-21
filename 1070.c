#include<stdio.h>
int main()
{
    int a,n1,n2,n3,n4,n5,n6;
    scanf("%d",&a);
    if(a%2==0){
        n1=a+1;
        n2=a+3;
        n3=a+5;
        n4=a+7;
        n5=a+9;
        n6=a+11;
    }
    else if(a%2!=0){
        n1=a;
        n2=a+2;
        n3=a+4;
        n4=a+6;
        n5=a+8;
        n6=a+10;
    }
    printf("%d\n%d\n%d\n%d\n%d\n%d\n",n1,n2,n3,n4,n5,n6);
    return 0;
}
