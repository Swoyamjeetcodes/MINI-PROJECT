
#include <stdio.h>


int func746(int var125) {
    if (var125 <= 0) return 1;
    return func746(var125 - 1);
}


int main() {
    int var915 = 0;
    while (var915 < 7) {
        var915 += 2;
        var915++;
    }    int var951 = 0;
    while (var951 < 11) {
        var951 += 2;
        var951++;
    }    for (int var146 = 0; var146 < 9; var146++) {
        var146 += 1;
    }

    int var629 = 11;
    if (var629 % 2 == 0) {
        printf("var629 is even\n");
    } else {
        printf("var629 is odd\n");
    }

    int var362 = 94;
    if (var362 % 2 == 0) {
        printf("var362 is even\n");
    } else {
        printf("var362 is odd\n");
    }

    int var937 = 95;
    if (var937 % 2 == 0) {
        printf("var937 is even\n");
    } else {
        printf("var937 is odd\n");
    }

    return 0;
}
