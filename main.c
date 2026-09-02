#include <stdio.h>

int main(void) {
    int a[5];
    for (int i = 0; i < 5; i++)scanf("%d\n", &a[i]);
    int mx = a[0];
    for (int i = 0; i < 5; i++) {
        if (a[i] > mx)mx = a[i];
    }
    printf("%d\n", mx);
}
