#include<stdio.h>
int main()
{

    int a,b,c,d,e,f,g,h;
    scanf("%d",&a);
    b=a/100;
    c=(a-(b*100))/50;
    d=(a-(b*100)-(c*50))/20;
    e=(a-(b*100)-(c*50)-(d*20))/10;
    f=(a-(b*100)-(c*50)-(d*20)-(e*10))/5;
    g=(a-(b*100)-(c*50)-(d*20)-(e*10)-(f*5))/2;
    h=(a-(b*100)-(c*50)-(d*20)-(e*10)-(f*5)-(g*2))/1;
    printf("%d nota(s) de R$ 100,00\n%d nota(s) de R$ 50,00\n%d nota(s) de R$ 20,00\n%d nota(s) de R$ 10,00\n%d nota(s) de R$ 5,00\n%d nota(s) de R$ 2,00\n%d nota(s) de R$ 1,00\n",b,c,d,e,f,g,h);
  return 0;
}
