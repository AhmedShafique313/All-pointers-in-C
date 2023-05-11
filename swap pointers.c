#include <stdio.h>
void swap(int*x, int*y) {
    int t;
    t=*x;
    *x=*y;
    *y=t;
}
int main () {
    int num1, num2;
    num1=2;
    num2=4;
    printf("Before Swap: %d %d", num1, num2);
    swap(&num1, &num2);
    printf("After swaping: %d %d", num1, num2);
    return 0;
}