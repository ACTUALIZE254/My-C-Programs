#include<stdio.h>

int main() {
 int a=5,b;

 printf("initial value of a:%d\n\n");

 //pre-increment
 b=++a;//a becomes 6,then assigned to b
 printf("after pre-increment(++a):\n");
 printf("a=%d,b=%d\n\n",a,b);

 //post increment
 b=a++;//a is assigned to b(6) then becomes 7
 printf("after post icrement(a++):\n");
 printf("a=%d,b=%d\n\n",a,b);

 //pre-decrement
 b=--a;//a becomes 6 then assigned to b
 printf("after pre decrement(--a):\n");
 printf("a=%d,b=%d\n\n",a,b);

 //post-decrement
b=a--;//a is assigned to b(6) then a becomes 5
printf("after post decrement(a--):\n");
printf("a=%d,b=%d\n\n",a,b);

return 0;
}