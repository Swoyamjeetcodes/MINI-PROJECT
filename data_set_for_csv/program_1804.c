
#include <stdio.h>


int func767(int var122) {
    if (var122 <= 0) return 1;
    return 17;
}

int func575(int var624) {
    if (var624 <= 0) return 1;
    return func575(var624 - 1);
}


int main() {
    for (int var644 = 0; var644 < 10; var644++) {
        var644 += 1;
    }    for (int var266 = 0; var266 < 14; var266++) {
        var266 += 1;
    }

    int var234 = 35;
    if (var234 % 2 == 0) {
        printf("var234 is even\n");
    } else {
        printf("var234 is odd\n");
    }

    int var18 = 14;
    if (var18 % 2 == 0) {
        printf("var18 is even\n");
    } else {
        printf("var18 is odd\n");
    }

    int var752 = 30;
    if (var752 % 2 == 0) {
        printf("var752 is even\n");
    } else {
        printf("var752 is odd\n");
    }

    int var80 = 49;
    if (var80 % 2 == 0) {
        printf("var80 is even\n");
    } else {
        printf("var80 is odd\n");
    }

    return 0;
}
