
#include <stdio.h>


int func739(int var939) {
    if (var939 <= 0) return 1;
    return func739(var939 - 1);
}


int main() {
    for (int var167 = 0; var167 < 17; var167++) {
        var167 += 5;
    }    int var49 = 0;
    while (var49 < 6) {
        var49 += 3;
        var49++;
    }

    int var217 = 73;
    if (var217 % 2 == 0) {
        printf("var217 is even\n");
    } else {
        printf("var217 is odd\n");
    }

    int var832 = 93;
    if (var832 % 2 == 0) {
        printf("var832 is even\n");
    } else {
        printf("var832 is odd\n");
    }

    return 0;
}
