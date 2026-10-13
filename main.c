#include <stdio.h>
#include<string.h>

int main(void) {
    char line[100] = "";
    fgets(line, sizeof line, stdin);

    for (int i = 0; line[i] != '\0'; i++) {
        if (line[i] == '\n') {
            line[i] = '\0';
            break;
        }
    }

    printf("%d", (int) strlen(line));
}
