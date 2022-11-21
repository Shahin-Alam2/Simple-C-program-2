#include<stdio.h>
int main()
{
    int i,a=0;
    double b,s=0,c;
    for(i=1;i<=6;i++){

    scanf("%lf",&b);
    if(b>0){
        a=a+1;
        s=s+b;

      }

    }
    c=s/a;
    printf("%d valores positivos\n",a);
    printf("%0.1lf\n",c);

    return 0;
}

