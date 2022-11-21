#include<stdio.h>
int main()
{
    double a;
    int n100,n50,n20,n10,n5,n2;
    int m1,m50,m25,m10,m5,m01;

    scanf("%lf",&a);
    int n=a;
    int m=(a-n)*100;

    if((m*1000)%10==9){
        m++;
    }
    n100=n/100;
    n=n%100;
    n50=n/50;
    n=n%50;
    n20=n/20;
    n=n%20;
    n10=n/10;
    n=n%10;
    n5=n/5;
    n=n%5;
    n2=n/2;
    n=n%2;

    m1=n/1;
    n=n%1;
    m50=m/50;
    m=m%50;
    m25=n/25;
    m=m%25;
    m10=m/10;
    m=m%10;
    m5=m/5;
    m=m%5;
    m01=m/1;


    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n",n100);
    printf("%d nota(s) de R$ 50.00\n",n50);
    printf("%d nota(s) de R$ 20.00\n",n20);
    printf("%d nota(s) de R$ 10.00\n",n10);
    printf("%d nota(s) de R$ 5.00\n",n5);
    printf("%d nota(s) de R$ 2.00\n",n2);

    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n",m1);
    printf("%d moeda(s) de R$ 0.50\n",m50);
    printf("%d moeda(s) de R$ 0.25\n",m25);
    printf("%d moeda(s) de R$ 0.10\n",m10);
    printf("%d moeda(s) de R$ 0.05\n",m5);
    printf("%d moeda(s) de R$ 0.01\n",m01);
  return 0;
}
