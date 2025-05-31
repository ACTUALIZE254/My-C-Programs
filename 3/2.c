#include<stdio.h>

int main() {
    int num;

    //input a number
    printf("enter a number.");
    scanf("%d",&num);

    //check if the number is positive or negative
    if(num>0){
        printf("the number is positive.\n");
    }else{
        printf("the number is negative.\n");
    }

    return 0;
}

