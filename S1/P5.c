/*5. Find Maximum of Three Numbers (Using Pointers as Parameters)
Write a function int max(int *a, int *b, int *c) that returns the largest of three numbers*/

#include <stdio.h>

int max(int *a, int*b, int*c){
    int max = *a;
    if (*b > max){
        max = *b;
    }
    if (*c > max){
        max = *c;
    }
    return max;
}

int main(){
    int num1, num2, num3, largeNum;
    printf("enter three integers");
    scanf("%d %d %d", &num1, &num2, &num3);

    largeNum = max(&num1, &num2, &num3);
    printf("largest number = %d", largeNum)
    return 0;
}