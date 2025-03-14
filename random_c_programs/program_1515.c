
#include <stdio.h>


int func397(int var252) {
    if (var252 <= 0) return 1;
    return 43;
}

int func585(int var671) {
    if (var671 <= 0) return 1;
    return func585(var671 - 1);
}


int main() {
    for (int var221 = 0; var221 < 18; var221++) {
        var221 += 3;
    }    for (int var527 = 0; var527 < 7; var527++) {
        var527 += 2;
    }    for (int var551 = 0; var551 < 10; var551++) {
        var551 += 2;
    }    int var150 = 0;
    while (var150 < 20) {
        var150 += 3;
        var150++;
    }    int var395 = 0;
    while (var395 < 19) {
        var395 += 3;
        var395++;
    }    for (int var343 = 0; var343 < 6; var343++) {
        var343 += 4;
    }    for (int var654 = 0; var654 < 15; var654++) {
        var654 += 4;
    }

    int var758 = 0;
    if (var758 % 2 == 0) {
        printf("var758 is even\n");
    } else {
        printf("var758 is odd\n");
    }

    return 0;
}
