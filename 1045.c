#include<stdio.h>
int main()
{
    double a,b,c;
    scanf("%lf%lf%lf",&a,&b,&c);

    if((a+b)<=c||(a+c)<=b||(b+c)<=a){
        printf("NAO FORMA TRIANGULO\n");
    }
    if(((a*a)+(b*b)==c*c)||((b*b)+(c*c)==a*a)||((c*c)+(a*a)==b*b)){
        printf("TRIANGULO RETANGULO\n");
    }
    if((((a*a)+(b*b))<(c*c))||(((b*b)+(c*c))<(a*a))||(((c*c)+(a*a))<(b*b))){
        printf("TRIANGULO OBTUSANGULO\n");
    }
    if((((a*a)+(b*b))>(c*c))||(((b*b)+(c*c))>(a*a)||(((c*c)+(a*a))>(b*b)))){
        printf("TRIANGULO ACUTANGULO\n");
    }
    if((a==b)&&(b==c)){
        printf("TRIANGULO EQUILATERO\n");
    }
   if(((a==b)&&(a!=c))||((b==c)&&(b!=a))||((c==a)&&(c!=b))){
        printf("TRIANGULO ISOSCELES\n");
    }
    return 0;
}
