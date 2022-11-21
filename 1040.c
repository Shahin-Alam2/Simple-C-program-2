#include<stdio.h>
int main()
{
    double a,b,c,d,e,f,g;
    scanf("%lf%lf%lf%lf",&a,&b,&c,&d);

    e=((a*2.0)+(b*3.0)+(c*4.0)+d)/10;

    if(e>=7.0){
        printf("Media: %0.1lf\n",e);
        printf("Aluno aprovado.\n");
    }
    else if(e>=5.0){
        printf("Media: %0.1lf\n",e);
        printf("Aluno em exame.\n");
        scanf("%lf",&f);
        printf("Nota do exame: %0.1lf\n",f);
        g=(e+f)/2;
        if(g>=5){
            printf("Aluno aprovado.\n");
        }
        else if(g<=4.9){
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %0.1lf\n",g);

    }

     else if(e<5.0){
        printf("Media: %0.1lf\n",e);
        printf("Aluno reprovado.\n");
    }
  return 0;
}
