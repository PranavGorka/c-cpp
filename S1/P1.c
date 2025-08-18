/*Print Address and Value of a Variable
Write a program to declare an integer variable. Use a pointer to print the address and
value of that variable
*/


#include <stdio.h>

int main(){
    int num = 5;
    int * ptr = &num;

    printf("value of num is %d", *ptr);
    printf("address of num is %p", ptr);

    return 0;

}