#include<stdio.h>

int main(){
    int a=10;
    int b=5;

    printf("initial valies:a=%d,b=%d\n\n",a,b);

    //basic assignments
    a=15;
    printf("After a=15:a=%d\n",a);

    //+-oparator
    a+=b; //a=a+b
    printf("After a+=b: a=%d\n",a);

    //-=oparator
    a-=b; //a=a-b
    printf("after a-=b: a=%d\n",a);

   // *=oparator
   a*=b;//a=a*b
   printf("After a*=b: a=%d\n",a);

   // /= oparator
   a/=b;//a=a/b
   printf("Aftaer a/=b: a=%d\n",a);

   //%= oparator
   a%=b;//a=a%b
   printf("After a%%=b: a=%d\n",a);

   return 0;

}