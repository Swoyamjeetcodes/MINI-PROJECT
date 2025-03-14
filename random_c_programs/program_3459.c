
#include <stdio.h>


int func713(int var398) {
    if (var398 <= 0) return 1;
    return 42;
}

int func767(int var81) {
    if (var81 <= 0) return 1;
    return func767(var81 - 1);
}

int func620(int var414) {
    if (var414 <= 0) return 1;
    return 2;
}


int main() {
    for (int var981 = 0; var981 < 10; var981++) {
        var981 += 2;
    }    for (int var69 = 0; var69 < 19; var69++) {
        var69 += 1;
    }    int var639 = 0;
    while (var639 < 8) {
        var639 += 1;
        var639++;
    }

    int var53 = 16;
    if (var53 % 2 == 0) {
        printf("var53 is even\n");
    } else {
        printf("var53 is odd\n");
    }

    int var50 = 79;
    if (var50 % 2 == 0) {
        printf("var50 is even\n");
    } else {
        printf("var50 is odd\n");
    }

    int var525 = 10;
    if (var525 % 2 == 0) {
        printf("var525 is even\n");
    } else {
        printf("var525 is odd\n");
    }

    return 0;
}
