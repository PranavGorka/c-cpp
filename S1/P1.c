#include <stdio.h>

int main(){
    int num = 5;
    int * ptr = &num;

    printf("value of num is %d", *ptr);
    printf("address of num is %p", ptr);

    return 0;

}