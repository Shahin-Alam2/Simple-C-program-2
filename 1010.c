#include<stdio.h>
int main()
{
    int a1,b1,a2,b2;
    double c1,c2,d;
    scanf("%d%d",&a1,&b1);
    scanf("%lf",&c1);
    scanf("%d%d",&a2,&b2);
    scanf("%lf",&c2);

    d=(b1*c1)+(b2*c2);
    printf("VALOR A PAGAR: R$ %0.2lf\n",d);
  return 0;
}
