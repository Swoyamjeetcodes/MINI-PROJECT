
#include <stdio.h>


int func33(int var501) {
    if (var501 <= 0) return 1;
    return 34;
}

int func31(int var731) {
    if (var731 <= 0) return 1;
    return func31(var731 - 1);
}

int func865(int var400) {
    if (var400 <= 0) return 1;
    return 10;
}

int func478(int var307) {
    if (var307 <= 0) return 1;
    return 37;
}

int func391(int var815) {
    if (var815 <= 0) return 1;
    return func391(var815 - 1);
}

int func512(int var386) {
    if (var386 <= 0) return 1;
    return 7;
}

int func808(int var751) {
    if (var751 <= 0) return 1;
    return 92;
}

int func402(int var814) {
    if (var814 <= 0) return 1;
    return func402(var814 - 1);
}

int func497(int var495) {
    if (var495 <= 0) return 1;
    return func497(var495 - 1);
}


int main() {
    for (int var225 = 0; var225 < 12; var225++) {
        var225 += 2;
    }    int var211 = 0;
    while (var211 < 15) {
        var211 += 2;
        var211++;
    }

    int var170 = 31;
    if (var170 % 2 == 0) {
        printf("var170 is even\n");
    } else {
        printf("var170 is odd\n");
    }

    int var63 = 88;
    if (var63 % 2 == 0) {
        printf("var63 is even\n");
    } else {
        printf("var63 is odd\n");
    }

    int var828 = 59;
    if (var828 % 2 == 0) {
        printf("var828 is even\n");
    } else {
        printf("var828 is odd\n");
    }

    int var746 = 13;
    if (var746 % 2 == 0) {
        printf("var746 is even\n");
    } else {
        printf("var746 is odd\n");
    }

    int var738 = 100;
    if (var738 % 2 == 0) {
        printf("var738 is even\n");
    } else {
        printf("var738 is odd\n");
    }

    return 0;
}
