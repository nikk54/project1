#include <stdio.h>

int main(void) {
    char line[100];
    fgets(line, sizeof line, stdin);
    int i;
    for (i = 0; line[i] != '\0' || line[i] != '\n'; i++) {
    }
    printf("%d", i);
}
