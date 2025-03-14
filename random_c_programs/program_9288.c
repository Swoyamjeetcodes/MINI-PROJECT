
#include <stdio.h>


int func784(int var123) {
    if (var123 <= 0) return 1;
    return func784(var123 - 1);
}

int func955(int var797) {
    if (var797 <= 0) return 1;
    return func955(var797 - 1);
}

int func27(int var458) {
    if (var458 <= 0) return 1;
    return 45;
}

int func439(int var407) {
    if (var407 <= 0) return 1;
    return 23;
}


int main() {
    int var544 = 0;
    while (var544 < 15) {
        var544 += 4;
        var544++;
    }    int var310 = 0;
    while (var310 < 5) {
        var310 += 2;
        var310++;
    }    for (int var970 = 0; var970 < 14; var970++) {
        var970 += 3;
    }

    int var28 = 4;
    if (var28 % 2 == 0) {
        printf("var28 is even\n");
    } else {
        printf("var28 is odd\n");
    }

    int var444 = 33;
    if (var444 % 2 == 0) {
        printf("var444 is even\n");
    } else {
        printf("var444 is odd\n");
    }

    int var419 = 6;
    if (var419 % 2 == 0) {
        printf("var419 is even\n");
    } else {
        printf("var419 is odd\n");
    }

    return 0;
}
