
#include <stdio.h>


int func626(int var387) {
    if (var387 <= 0) return 1;
    return 21;
}

int func939(int var821) {
    if (var821 <= 0) return 1;
    return func939(var821 - 1);
}


int main() {
    int var783 = 0;
    while (var783 < 13) {
        var783 += 1;
        var783++;
    }    int var421 = 0;
    while (var421 < 10) {
        var421 += 2;
        var421++;
    }    int var854 = 0;
    while (var854 < 7) {
        var854 += 5;
        var854++;
    }

    int var231 = 69;
    if (var231 % 2 == 0) {
        printf("var231 is even\n");
    } else {
        printf("var231 is odd\n");
    }

    int var217 = 38;
    if (var217 % 2 == 0) {
        printf("var217 is even\n");
    } else {
        printf("var217 is odd\n");
    }

    return 0;
}
