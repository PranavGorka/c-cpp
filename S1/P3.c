/*3. Increment a Variable using Pointer Parameter
Write a function void increment(int *p) that increases the value of an integer by 1. Pass
the variable’s address to this function and print the updated value.*/


#include <stdio.h>

void increment(int * p){
    *p = *p + 1;
}

int main(){
    int num;
    printf("enter a integer");
    scanf("%d", &num);

    increment(&num);
    printf("new value of num = %d", num)


    return 0;
}