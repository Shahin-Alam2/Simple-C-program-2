#include<stdio.h>

#define c 2

int main()
{
    int a;
    printf("Enter an Integer number:");
    scanf("%d",&a);
    if(a!=c){
        printf("Correct. %d is not equals to %d\n",a,c);
    }
    else
        printf("Incorrect!!! \n%d is equals to %d\n",a,c);

    return 0;
}
