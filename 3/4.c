#include <stdio.h>

int main () {
    int mark;


    //input marks
    printf("enter your mark(0-100): ");
    scanf("%d",&mark);

    //check grade
    if(mark>=90) {
        printf("grade A\n");
    }else if("mark>=75"){
        printf("grade B\n");
    }else if("mark>=60") {
        printf("grade C\n");
    }else if("mark is >=40") {
        printf("grade D\n");
    }else{
        printf("fail\n");
    }

    return 0;

    
    
}