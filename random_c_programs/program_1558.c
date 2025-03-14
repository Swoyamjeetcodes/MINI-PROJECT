
#include <stdio.h>


int func169(int var965) {
    if (var965 <= 0) return 1;
    return 64;
}

int func216(int var958) {
    if (var958 <= 0) return 1;
    return 19;
}

int func821(int var337) {
    if (var337 <= 0) return 1;
    return func821(var337 - 1);
}

int func157(int var169) {
    if (var169 <= 0) return 1;
    return func157(var169 - 1);
}


int main() {
    for (int var587 = 0; var587 < 16; var587++) {
        var587 += 5;
    }    int var585 = 0;
    while (var585 < 18) {
        var585 += 4;
        var585++;
    }    for (int var343 = 0; var343 < 14; var343++) {
        var343 += 4;
    }    int var756 = 0;
    while (var756 < 12) {
        var756 += 3;
        var756++;
    }    for (int var622 = 0; var622 < 12; var622++) {
        var622 += 5;
    }    for (int var293 = 0; var293 < 9; var293++) {
        var293 += 4;
    }    for (int var569 = 0; var569 < 12; var569++) {
        var569 += 4;
    }

    int var87 = 97;
    if (var87 % 2 == 0) {
        printf("var87 is even\n");
    } else {
        printf("var87 is odd\n");
    }

    int var51 = 10;
    if (var51 % 2 == 0) {
        printf("var51 is even\n");
    } else {
        printf("var51 is odd\n");
    }

    int var199 = 53;
    if (var199 % 2 == 0) {
        printf("var199 is even\n");
    } else {
        printf("var199 is odd\n");
    }

    int var717 = 54;
    if (var717 % 2 == 0) {
        printf("var717 is even\n");
    } else {
        printf("var717 is odd\n");
    }

    int var775 = 98;
    if (var775 % 2 == 0) {
        printf("var775 is even\n");
    } else {
        printf("var775 is odd\n");
    }

    return 0;
}
