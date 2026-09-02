#include <stdio.h>
#include<string.h>

int main(void) {
    char input[256];
    scanf("%255s", &input);
    printf("%d", strlen(input));
}
