#include<stdio.h>
int main()
{
    int a,b;
    while(a!=b){
        scanf("%d%d",&a,&b);
        if(a<b){
            printf("Crescente\n");
        }
        else if(a>b){
            printf("Decrescente\n");
        }
        else{
            break;
        }

    }
    return 0;
}
