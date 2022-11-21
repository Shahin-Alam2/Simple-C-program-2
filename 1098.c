#include<stdio.h>
int main()
{
    int j;
    double i,a;
    for(i=0;i<=2;i=i+0.2){
        for(j=1;j<=3;j++){
            a=(j*1.0)+i;
            if(a%==0){
                    i=(int) i;
                    j=(int) j;
                printf("I=%d J=%d\n",i,a);
            }
            else
            printf("I=%0.1lf J=%0.1lf\n",i,a);
        }
    }
    return 0;
}
