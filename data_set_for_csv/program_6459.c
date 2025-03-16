
#include <stdio.h>


int func193(int var131) {
    if (var131 <= 0) return 1;
    return 98;
}

int func658(int var104) {
    if (var104 <= 0) return 1;
    return func658(var104 - 1);
}

int func24(int var216) {
    if (var216 <= 0) return 1;
    return func24(var216 - 1);
}

int func551(int var818) {
    if (var818 <= 0) return 1;
    return 71;
}


int main() {
    for (int var560 = 0; var560 < 6; var560++) {
        var560 += 5;
    }    for (int var716 = 0; var716 < 17; var716++) {
        var716 += 4;
    }    int var971 = 0;
    while (var971 < 12) {
        var971 += 1;
        var971++;
    }

    int var950 = 9;
    if (var950 % 2 == 0) {
        printf("var950 is even\n");
    } else {
        printf("var950 is odd\n");
    }

    int var415 = 77;
    if (var415 % 2 == 0) {
        printf("var415 is even\n");
    } else {
        printf("var415 is odd\n");
    }

    int var750 = 96;
    if (var750 % 2 == 0) {
        printf("var750 is even\n");
    } else {
        printf("var750 is odd\n");
    }

    return 0;
}
