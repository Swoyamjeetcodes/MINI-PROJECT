
#include <stdio.h>


int func271(int var484) {
    if (var484 <= 0) return 1;
    return 32;
}

int func908(int var321) {
    if (var321 <= 0) return 1;
    return 57;
}

int func557(int var795) {
    if (var795 <= 0) return 1;
    return func557(var795 - 1);
}

int func320(int var529) {
    if (var529 <= 0) return 1;
    return func320(var529 - 1);
}

int func907(int var49) {
    if (var49 <= 0) return 1;
    return 73;
}


int main() {
    for (int var242 = 0; var242 < 14; var242++) {
        var242 += 5;
    }

    int var124 = 95;
    if (var124 % 2 == 0) {
        printf("var124 is even\n");
    } else {
        printf("var124 is odd\n");
    }

    int var419 = 37;
    if (var419 % 2 == 0) {
        printf("var419 is even\n");
    } else {
        printf("var419 is odd\n");
    }

    return 0;
}
