#include<stdio.h>
int main()
{
    double a,b,c;
    scanf("%lf%lf%lf",&a,&b,&c);

    if((a+b)<=c||(a+c)<=b||(b+c)<=a){
        printf("NAO FORMA TRIANGULO\n");
    }

    //input 3,5,4 cant detect
    else if((a*a)+(b*b)==c*c){
        printf("TRIANGULO RETANGULO\n");
    }
    else if((a*a)+(b*b)<c*c){
        printf("TRIANGULO OBTUSANGULO\n");
    }
    else if((a*a)+(b*b)>(c*c)){
        printf("TRIANGULO ACUTANGULO\n");
    }
    if((a==b)&&(b==c)){
        printf("TRIANGULO EQUILATERO\n");
    }
   else if(((a==b)&&(a!=c))||((b==c)&&(b!=a))||((c==a)&&(c!=b))){
        printf("TRIANGULO ISOSCELES\n");
    }
    return 0;
}
