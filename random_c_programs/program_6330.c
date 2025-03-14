
#include <stdio.h>


int func301(int var802) {
    if (var802 <= 0) return 1;
    return 63;
}

int func821(int var335) {
    if (var335 <= 0) return 1;
    return 28;
}

int func496(int var325) {
    if (var325 <= 0) return 1;
    return 86;
}

int func705(int var36) {
    if (var36 <= 0) return 1;
    return func705(var36 - 1);
}

int func475(int var755) {
    if (var755 <= 0) return 1;
    return 40;
}

int func951(int var313) {
    if (var313 <= 0) return 1;
    return func951(var313 - 1);
}

int func527(int var998) {
    if (var998 <= 0) return 1;
    return 81;
}

int func638(int var113) {
    if (var113 <= 0) return 1;
    return func638(var113 - 1);
}

int func300(int var564) {
    if (var564 <= 0) return 1;
    return func300(var564 - 1);
}

int func83(int var218) {
    if (var218 <= 0) return 1;
    return 71;
}


int main() {
    for (int var299 = 0; var299 < 7; var299++) {
        var299 += 3;
    }    for (int var840 = 0; var840 < 9; var840++) {
        var840 += 2;
    }    for (int var673 = 0; var673 < 9; var673++) {
        var673 += 3;
    }    for (int var652 = 0; var652 < 16; var652++) {
        var652 += 4;
    }

    int var191 = 32;
    if (var191 % 2 == 0) {
        printf("var191 is even\n");
    } else {
        printf("var191 is odd\n");
    }

    int var169 = 9;
    if (var169 % 2 == 0) {
        printf("var169 is even\n");
    } else {
        printf("var169 is odd\n");
    }

    int var483 = 2;
    if (var483 % 2 == 0) {
        printf("var483 is even\n");
    } else {
        printf("var483 is odd\n");
    }

    int var803 = 72;
    if (var803 % 2 == 0) {
        printf("var803 is even\n");
    } else {
        printf("var803 is odd\n");
    }

    int var540 = 50;
    if (var540 % 2 == 0) {
        printf("var540 is even\n");
    } else {
        printf("var540 is odd\n");
    }

    int var721 = 14;
    if (var721 % 2 == 0) {
        printf("var721 is even\n");
    } else {
        printf("var721 is odd\n");
    }

    return 0;
}
