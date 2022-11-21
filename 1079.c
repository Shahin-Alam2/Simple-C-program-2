#include<stdio.h>
int main()
{
    int t;
    double i,a,b,c,w;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%lf%lf%lf",&a,&b,&c);
        a=a*2;
        b=b*3;
        c=c*5;
        w=(a+b+c)/10;
        printf("%0.1lf\n",w);
    }
    return 0;
}
