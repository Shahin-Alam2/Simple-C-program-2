#include<stdio.h>
int main()
{
    double a,t;
    scanf("%lf",&a);

    if(a>=0.00&&a<=2000.00){
        printf("Isento");
    }
    else if(a>=2000.01&&a<=3000.00){
        t=0.08*(a-2000.00);
        printf("R$ %0.2lf\n",t);
    }
    else if(a>=3000.01&&a<=4500.00){
        t=0.18*(a-3000.00)+80;
        printf("R$ %0.2lf\n",t);
    }
    else{
        t=0.28*(a-4500.00)+1500*0.18+80;
        printf("R$ %0.2lf\n",t);
    }

    return 0;
}
