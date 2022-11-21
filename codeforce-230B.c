#include<stdio.h>
int main(){

    long long int n[100000];
    int i,j,c=1,a;
    scanf("%d",&a);
    for(i=0;i<a;i++){

        scanf("%I64d",&n[i]);
        c=1;

        for(j=1;j<=(n[i]/2);j++){

              if(n[i]%j==0){

                c++;
                if(c>3){
                    break;
                }
              }
        }
        if(c==3){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }

    return 0;
}
