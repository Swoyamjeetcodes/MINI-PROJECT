
#include <stdio.h>


int func508(int var40) {
    if (var40 <= 0) return 1;
    return 97;
}

int func803(int var438) {
    if (var438 <= 0) return 1;
    return 25;
}

int func972(int var552) {
    if (var552 <= 0) return 1;
    return func972(var552 - 1);
}

int func556(int var948) {
    if (var948 <= 0) return 1;
    return func556(var948 - 1);
}

int func449(int var878) {
    if (var878 <= 0) return 1;
    return func449(var878 - 1);
}


int main() {
    for (int var351 = 0; var351 < 8; var351++) {
        var351 += 1;
    }

    int var578 = 43;
    if (var578 % 2 == 0) {
        printf("var578 is even\n");
    } else {
        printf("var578 is odd\n");
    }

    int var304 = 13;
    if (var304 % 2 == 0) {
        printf("var304 is even\n");
    } else {
        printf("var304 is odd\n");
    }

    return 0;
}
