#include<stdio.h>
int main()
{
    double a,b;
    scanf("%lf",&a);
    if((a>0)&&(a<=400.00)){
        b=a+(a*0.15);
        printf("Novo salario: %0.2lf\nReajuste ganho: %0.2lf\nEm percentual: 15 %%\n",b,b-a);
    }
    else if((a>=400.01)&&(a<=800.00)){
            b=a+(a*0.12);
        printf("Novo salario: %0.2lf\nReajuste ganho: %0.2lf\nEm percentual: 12 %%\n",b,b-a);
    }
    else if((a>=800.01)&&(a<=1200)){
        b=a+(a*0.10);
       printf("Novo salario: %0.2lf\nReajuste ganho: %0.2lf\nEm percentual: 10 %%\n",b,b-a);
    }
    else if((a>=1200.01)&&(a<=2000.00)){
        b=a+(a*0.07);
        printf("Novo salario: %0.2lf\nReajuste ganho: %0.2lf\nEm percentual: 7 %%\n",b,b-a);
    }
    else if(a>2000.00){
        b=a+(a*0.04);
        printf("Novo salario: %0.2lf\nReajuste ganho: %0.2lf\nEm percentual: 4 %%\n",b,b-a);
    }

    return 0;
}
