/*4. Sum of Two Numbers using Pointers
Write a function that takes two integer pointers as parameters and returns their sum. Call
this function in main.

*/

#include <stdio.h>

int sumByReference(int * a, int * b){
    return *a + *b;
}

int main(){
    int a, b, sum;
    printf("enter two integer");
    scanf("%d %d", &a, &b);

    sum = sumByReference(&a, &b);

    printf("sum = %d", sum)
    return 0;
}