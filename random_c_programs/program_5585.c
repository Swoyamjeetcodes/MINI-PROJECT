
#include <stdio.h>


int func899(int var622) {
    if (var622 <= 0) return 1;
    return func899(var622 - 1);
}

int func868(int var972) {
    if (var972 <= 0) return 1;
    return func868(var972 - 1);
}


int main() {
    for (int var656 = 0; var656 < 16; var656++) {
        var656 += 3;
    }    for (int var909 = 0; var909 < 10; var909++) {
        var909 += 2;
    }    for (int var729 = 0; var729 < 6; var729++) {
        var729 += 4;
    }    for (int var141 = 0; var141 < 13; var141++) {
        var141 += 2;
    }    for (int var878 = 0; var878 < 7; var878++) {
        var878 += 3;
    }    int var791 = 0;
    while (var791 < 5) {
        var791 += 5;
        var791++;
    }

    int var813 = 86;
    if (var813 % 2 == 0) {
        printf("var813 is even\n");
    } else {
        printf("var813 is odd\n");
    }

    int var17 = 22;
    if (var17 % 2 == 0) {
        printf("var17 is even\n");
    } else {
        printf("var17 is odd\n");
    }

    int var877 = 52;
    if (var877 % 2 == 0) {
        printf("var877 is even\n");
    } else {
        printf("var877 is odd\n");
    }

    int var841 = 46;
    if (var841 % 2 == 0) {
        printf("var841 is even\n");
    } else {
        printf("var841 is odd\n");
    }

    int var837 = 14;
    if (var837 % 2 == 0) {
        printf("var837 is even\n");
    } else {
        printf("var837 is odd\n");
    }

    return 0;
}
