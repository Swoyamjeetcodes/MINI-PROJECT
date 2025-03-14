
#include <stdio.h>


int func769(int var83) {
    if (var83 <= 0) return 1;
    return func769(var83 - 1);
}

int func164(int var967) {
    if (var967 <= 0) return 1;
    return func164(var967 - 1);
}


int main() {
    for (int var170 = 0; var170 < 11; var170++) {
        var170 += 2;
    }    int var695 = 0;
    while (var695 < 6) {
        var695 += 5;
        var695++;
    }    for (int var828 = 0; var828 < 5; var828++) {
        var828 += 2;
    }

    int var187 = 50;
    if (var187 % 2 == 0) {
        printf("var187 is even\n");
    } else {
        printf("var187 is odd\n");
    }

    int var296 = 23;
    if (var296 % 2 == 0) {
        printf("var296 is even\n");
    } else {
        printf("var296 is odd\n");
    }

    int var465 = 79;
    if (var465 % 2 == 0) {
        printf("var465 is even\n");
    } else {
        printf("var465 is odd\n");
    }

    return 0;
}
