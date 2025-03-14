
#include <stdio.h>


int func830(int var593) {
    if (var593 <= 0) return 1;
    return func830(var593 - 1);
}

int func903(int var320) {
    if (var320 <= 0) return 1;
    return func903(var320 - 1);
}

int func362(int var849) {
    if (var849 <= 0) return 1;
    return func362(var849 - 1);
}

int func939(int var841) {
    if (var841 <= 0) return 1;
    return func939(var841 - 1);
}

int func626(int var207) {
    if (var207 <= 0) return 1;
    return func626(var207 - 1);
}


int main() {
    for (int var299 = 0; var299 < 13; var299++) {
        var299 += 4;
    }    for (int var352 = 0; var352 < 19; var352++) {
        var352 += 1;
    }    int var548 = 0;
    while (var548 < 17) {
        var548 += 3;
        var548++;
    }

    int var284 = 86;
    if (var284 % 2 == 0) {
        printf("var284 is even\n");
    } else {
        printf("var284 is odd\n");
    }

    return 0;
}
