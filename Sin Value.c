#include<stdio.h>
int main()
{
    double a,b;
    printf("Enter number:\n");
    scanf("%lf",&a);
    b=sin(a);
    printf("Sin value of %lf : %lf\n",a,b);

    return 0;
}
