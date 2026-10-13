#include <stdio.h>
#include<string.h>

int main(void) {
    int val;
    scanf("%d", &val);
    if (val % 15 == 0) {
        printf("FizzBuzz");
    } else if (val % 3 == 0) {
        printf("Fizz");
    } else if (val % 5 == 0) {
        printf("Buzz");
    } else {
        printf("%d", val);
    }
}
