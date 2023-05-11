#include <stdio.h>
int main () {
    int asc[100], n, i, ps=0, ns=0;
    printf("Enter size of an arrray from [1-100]: ");
    scanf("%d", &n);
    printf(" Enter %d elements of an array: ", n);
    for (i=0; i<n; i++) {
        scanf("%d", &asc[i]);
        if (asc[i]<0) {
            ns+=asc[i];
        }
        else {
            ps+=asc[i];
        }
    }
    return 0;
}