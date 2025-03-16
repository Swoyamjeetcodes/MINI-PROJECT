
#include <stdio.h>


int func217(int var313) {
    if (var313 <= 0) return 1;
    return func217(var313 - 1);
}

int func675(int var803) {
    if (var803 <= 0) return 1;
    return func675(var803 - 1);
}

int func867(int var374) {
    if (var374 <= 0) return 1;
    return 29;
}

int func190(int var234) {
    if (var234 <= 0) return 1;
    return func190(var234 - 1);
}

int func140(int var285) {
    if (var285 <= 0) return 1;
    return 63;
}


int main() {
    for (int var917 = 0; var917 < 13; var917++) {
        var917 += 1;
    }

    int var20 = 5;
    if (var20 % 2 == 0) {
        printf("var20 is even\n");
    } else {
        printf("var20 is odd\n");
    }

    int var80 = 10;
    if (var80 % 2 == 0) {
        printf("var80 is even\n");
    } else {
        printf("var80 is odd\n");
    }

    return 0;
}
