#include<stdio.h>
void changeValue(int *x){
    *x = 100;
    printf("Inside function: *x = %d\n", *x);
}
int main(){
    int a = 10;
    printf("Before function call: a = %d\n", a);
    changeValue(&a);
    printf("After function call: a = %d\n", a);
    return 0;
}