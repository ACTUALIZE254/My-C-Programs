#include <stdio.h>

int main() {
    int a,b;

    //input two numbers
    printf("enter first number:\n");
    scanf("%d",&a);

    printf("enter second number:\n");
    scanf("%d",&b);

    //perform arithmetic operations
    printf("\nresults:\n");
    printf("addition (a+b)= %d\n",a+b);
    printf("subtraction (a-b)= %d\n",a-b);
    printf("multiplication (a*b)= %d\n",a*b);

    if(b!=0){
        printf("division (a/b)= %d\n",a/b);
        printf("modulus (a%%b)= %d\n",a%b);
    }else{
        printf("division and modulus by zero is not allowed\n");
    }

    return 0;

}
