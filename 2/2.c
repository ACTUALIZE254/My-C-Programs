#include <stdio.h>
int main() {

    int a,b;

    //input two numbers

    printf("print first number");
    scanf("%d",&a);
    printf("print second number");
    scanf("%d",&b);

    //start relating numbers

    printf("\nresults:\n");
    printf("a==b:%d\n",a==b);
    printf("a!=b:%d\n",a!=b);
    printf("a>b:%d\n",a>b);
    printf("a<b:%d",a<b);
    printf("a>=b:%d\n",a>=b);
    printf("a<=b:%d\n",a<=b);

    return 0;
}