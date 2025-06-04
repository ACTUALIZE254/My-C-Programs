#include<stdio.h>

int main() {
    int num;

    //input number
    printf("enter a number: ");
    scanf("%d",&num);
    //outer if:check if number is positive
    if(num>0){
        //inner if:check if number is even
        if(num % 2 ==0) {
            printf("positive even number.\n");
        }else{
            printf("positive odd number.\n");
        }
    }else{
        printf("number is not positive.\n");
    }

    return 0;
}