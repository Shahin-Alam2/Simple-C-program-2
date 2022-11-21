#include<stdio.h>
int main(){

    int A,B,C,maxAB,max;
        scanf("%d%d%d",&A,&B,&C);
        maxAB=(A+B+ abs(A-B))/2;
        max=(maxAB+C+abs(maxAB-C))/2;
        printf("%d eh o maior\n",max);
  return 0;
}
