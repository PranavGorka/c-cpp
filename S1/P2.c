/*2. Swap Two Numbers (Call by Value vs Call by Reference)

Writhe two functions:
• One tat swaps numbers using call by value.
• One that swaps numbers using call by reference (pointers).*/

#include <stdio.h>

void swapByValue(int a, int b){
    b = a+b;
    a = b-a;
    b = b-a;
    printf("a = %d , b = %d", a, b);
    
}

void swapByReference(int* a, int* b){
    *b = *a+*b;
    *a = *b-*a;
    *b = *b-*a;
    printf("a = %d , b = %d", a, b);
}

int main(){
    int a = 3 , b = 5;

    printf("before swap: a = %d, b = %d" a,b);

    printf("after swap");
    swapByValue(a, b);
    swapByReference(&a, &b);

    return 0;
}