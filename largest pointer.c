#include <stdio.h>
int main () {
    int n1=2, n2= 6, n3= 9;
    int *p1, *p2, *p3;
    p1=n1;
    p2=n2;
    p3=n3;
    if (p1>p2 && p1>p3) {
        printf("\n Largest: %d", n1);
    }
    else if {
        printf("\n Smallest %d", n1);
    }
    else if (p3>p2 && p3>p1) {
        printf("\n Largest: %d", n3);
    }
    else if {
        printf("\n Smallest: %d", n3);
    }
    else if (p2>p1 && p2>p3) {
        printf("\n LArgest: %d", n2);
    }
    else if {
        printf("\n Smallest: %d", n2);
    }
    return 0;
}