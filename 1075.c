#include<stdio.h>
int main()
{
    int n,a,i;
    scanf("%d",&n);

    for(i=1;i<=10000;i++){
        a=i%n;
        if(a==2){
            printf("%d\n",i);
        }
    }
    return 0;
}
