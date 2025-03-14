
#include <stdio.h>


int func449(int var264) {
    if (var264 <= 0) return 1;
    return func449(var264 - 1);
}

int func836(int var556) {
    if (var556 <= 0) return 1;
    return func836(var556 - 1);
}


int main() {
    int var521 = 0;
    while (var521 < 15) {
        var521 += 5;
        var521++;
    }    for (int var153 = 0; var153 < 7; var153++) {
        var153 += 3;
    }

    int var58 = 48;
    if (var58 % 2 == 0) {
        printf("var58 is even\n");
    } else {
        printf("var58 is odd\n");
    }

    return 0;
}
