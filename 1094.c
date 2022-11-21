#include<stdio.h>
int main()
{
    int n,i,a,m,c=0,r=0,s=0;
    double cp,rp,sp;
    char t;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d %c",&a,&t);

        if(t=='C'){
            c=c+a;
        }
       else if(t=='R'){
            r=r+a;
        }
       else if(t=='S'){
            s=s+a;
        }
    }
    m=c+r+s;
    cp=(c/(m*1.0))*100.00;
    rp=(r/(m*1.0))*100.00;
    sp=(s/(m*1.0))*100.00;
    printf("Total: %d cobaias\n",m);
    printf("Total de coelhos: %d\n",c);
    printf("Total de ratos: %d\n",r);
    printf("Total de sapos: %d\n",s);

    printf("Percentual de coelhos: %0.2lf %%\n",cp);
    printf("Percentual de ratos: %0.2lf %%\n",rp);
    printf("Percentual de sapos: %0.2lf %%\n",sp);
    return 0;
}
