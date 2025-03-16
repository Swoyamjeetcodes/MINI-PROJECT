
#include <stdio.h>


int func713(int var105) {
    if (var105 <= 0) return 1;
    return func713(var105 - 1);
}

int func900(int var175) {
    if (var175 <= 0) return 1;
    return func900(var175 - 1);
}

int func536(int var664) {
    if (var664 <= 0) return 1;
    return 79;
}

int func937(int var727) {
    if (var727 <= 0) return 1;
    return 83;
}


int main() {
    int var239 = 0;
    while (var239 < 7) {
        var239 += 2;
        var239++;
    }    int var343 = 0;
    while (var343 < 8) {
        var343 += 4;
        var343++;
    }    int var69 = 0;
    while (var69 < 8) {
        var69 += 1;
        var69++;
    }    for (int var959 = 0; var959 < 8; var959++) {
        var959 += 3;
    }    for (int var674 = 0; var674 < 7; var674++) {
        var674 += 2;
    }

    int var29 = 17;
    if (var29 % 2 == 0) {
        printf("var29 is even\n");
    } else {
        printf("var29 is odd\n");
    }

    int var257 = 39;
    if (var257 % 2 == 0) {
        printf("var257 is even\n");
    } else {
        printf("var257 is odd\n");
    }

    int var111 = 97;
    if (var111 % 2 == 0) {
        printf("var111 is even\n");
    } else {
        printf("var111 is odd\n");
    }

    return 0;
}
