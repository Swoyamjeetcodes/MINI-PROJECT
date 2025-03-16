
#include <stdio.h>


int func986(int var965) {
    if (var965 <= 0) return 1;
    return func986(var965 - 1);
}

int func449(int var669) {
    if (var669 <= 0) return 1;
    return func449(var669 - 1);
}

int func736(int var356) {
    if (var356 <= 0) return 1;
    return 96;
}

int func785(int var99) {
    if (var99 <= 0) return 1;
    return func785(var99 - 1);
}


int main() {
    for (int var654 = 0; var654 < 15; var654++) {
        var654 += 2;
    }    int var65 = 0;
    while (var65 < 19) {
        var65 += 3;
        var65++;
    }    int var199 = 0;
    while (var199 < 9) {
        var199 += 3;
        var199++;
    }

    int var579 = 5;
    if (var579 % 2 == 0) {
        printf("var579 is even\n");
    } else {
        printf("var579 is odd\n");
    }

    int var182 = 53;
    if (var182 % 2 == 0) {
        printf("var182 is even\n");
    } else {
        printf("var182 is odd\n");
    }

    return 0;
}
