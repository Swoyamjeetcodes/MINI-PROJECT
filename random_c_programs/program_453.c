
#include <stdio.h>


int func453(int var685) {
    if (var685 <= 0) return 1;
    return func453(var685 - 1);
}

int func182(int var779) {
    if (var779 <= 0) return 1;
    return func182(var779 - 1);
}

int func741(int var750) {
    if (var750 <= 0) return 1;
    return 43;
}


int main() {
    int var83 = 0;
    while (var83 < 5) {
        var83 += 2;
        var83++;
    }

    int var954 = 31;
    if (var954 % 2 == 0) {
        printf("var954 is even\n");
    } else {
        printf("var954 is odd\n");
    }

    int var830 = 57;
    if (var830 % 2 == 0) {
        printf("var830 is even\n");
    } else {
        printf("var830 is odd\n");
    }

    int var725 = 86;
    if (var725 % 2 == 0) {
        printf("var725 is even\n");
    } else {
        printf("var725 is odd\n");
    }

    int var751 = 71;
    if (var751 % 2 == 0) {
        printf("var751 is even\n");
    } else {
        printf("var751 is odd\n");
    }

    return 0;
}
