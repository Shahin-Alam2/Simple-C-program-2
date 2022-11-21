#include<stdio.h>
int main()
{
    int c=0;
    double a,i;
    for(i=1;i<=6;i++){
        scanf("%lf",&a);
        if(a>0){
            c=c+1;
        }
    }
    printf("%d valores positivos\n",c);
    return 0;
}
