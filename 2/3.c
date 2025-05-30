#include <stdio.h>

int main() {
    int a,b;

    //input two numbers
    printf("enter first number");
    scanf("%d",&a);

    printf("enter second number");
    scanf("%d",&b);

    //logical operations
    printf("\nRESULTS\n");

    //logical AND
    if(a>0&&b>0) {
        printf("both a and b are positive a>0&&b>0:TRUE\n");
    }else{
        printf("both a and b are positive(a>0&&b>0):FALSE\n");
    }
    //logical OR
    if(a>0||b>0){
    printf("atleast one of a or b is positive(a>0||b>0):TRUE\n");
    }else{
        printf("atleast one of a or b is positive(a>0||b>0):FALSE");
    }

    //logical NOT
    if(!(a==b)){
        printf("a and b are not equal(!(a==b)):TRUE");
    }else{
        printf("a and b are not equal(1(a==b)):FALSE");
    }
    return 0;

}