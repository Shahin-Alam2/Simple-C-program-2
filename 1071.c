#include<stdio.h>
int main()
{
    int a,b,i,j,s=0;
    scanf("%d%d",&a,&b);
    if(a<b){
    for(i=a;i<b;i++)
      if((i%2!=0)&&(i!=a)){

        s=s+i;
      }
    }
    else if(a>b){
        for(i=b;i<a;i++)
        if((i%2!=0)&&(i!=b)){
            s=s+i;
        }
    }
    printf("%d\n",s);
    return 0;
}
