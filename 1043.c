#include<stdio.h>
int main()
{
    double a,b,c,d,e,f;
    scanf("%lf%lf%lf",&a,&b,&c);
    d=a+b+c;
    e=(a+b)*(c/2);
    if(((a+b)<=c)||((b+c)<=a)||((c+a)<=b)){

        printf("Area = %0.1lf\n",e);
    }
    else
        printf("Perimetro = %0.1lf\n",d);
    return 0;
}
