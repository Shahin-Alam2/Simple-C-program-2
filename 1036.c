#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c,x,y,r1,r2;
    scanf("%lf%lf%lf",&a,&b,&c);
    x=(b*b)-(4*a*c);
    y=sqrt(x);
    if((a==0)||(x<0)){
        printf("Impossivel calcular\n");
    }
    else {
        r1=(-b+y)/(2*a);
        r2=(-b-y)/(2*a);
        printf("R1 = %0.5lf\n",r1);
        printf("R2 = %0.5lf\n",r2);
    }

    return 0;
}
