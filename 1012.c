#include<stdio.h>
int main(){

     double A,B,C,pi,t,s,z,q,r;
     pi=3.14159;
     scanf("%lf%lf%lf",&A,&B,&C);
     t=(1.0/2)*A*C;
     s=pi*(C*C);
     z=(1.0/2)*(A+B)*C;
     q=B*B;
     r=A*B;
     printf("TRIANGULO: %0.3lf\nCIRCULO: %0.3lf\nTRAPEZIO: %0.3lf\nQUADRADO: %0.3lf\nRETANGULO: %0.3lf\n",t,s,z,q,r);
  return 0;
}
