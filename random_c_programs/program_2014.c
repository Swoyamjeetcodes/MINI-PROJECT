
#include <stdio.h>


int func171(int var820) {
    if (var820 <= 0) return 1;
    return func171(var820 - 1);
}

int func740(int var870) {
    if (var870 <= 0) return 1;
    return func740(var870 - 1);
}

int func320(int var20) {
    if (var20 <= 0) return 1;
    return func320(var20 - 1);
}

int func115(int var839) {
    if (var839 <= 0) return 1;
    return 94;
}

int func944(int var678) {
    if (var678 <= 0) return 1;
    return func944(var678 - 1);
}


int main() {
    for (int var805 = 0; var805 < 9; var805++) {
        var805 += 3;
    }    for (int var679 = 0; var679 < 11; var679++) {
        var679 += 4;
    }    int var484 = 0;
    while (var484 < 13) {
        var484 += 4;
        var484++;
    }    for (int var360 = 0; var360 < 14; var360++) {
        var360 += 4;
    }    for (int var270 = 0; var270 < 19; var270++) {
        var270 += 5;
    }    int var310 = 0;
    while (var310 < 11) {
        var310 += 2;
        var310++;
    }    int var11 = 0;
    while (var11 < 16) {
        var11 += 5;
        var11++;
    }

    int var192 = 32;
    if (var192 % 2 == 0) {
        printf("var192 is even\n");
    } else {
        printf("var192 is odd\n");
    }

    int var909 = 93;
    if (var909 % 2 == 0) {
        printf("var909 is even\n");
    } else {
        printf("var909 is odd\n");
    }

    int var218 = 20;
    if (var218 % 2 == 0) {
        printf("var218 is even\n");
    } else {
        printf("var218 is odd\n");
    }

    int var949 = 34;
    if (var949 % 2 == 0) {
        printf("var949 is even\n");
    } else {
        printf("var949 is odd\n");
    }

    int var216 = 82;
    if (var216 % 2 == 0) {
        printf("var216 is even\n");
    } else {
        printf("var216 is odd\n");
    }

    return 0;
}
