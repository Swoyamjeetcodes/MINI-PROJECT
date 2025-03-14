
#include <stdio.h>


int func79(int var208) {
    if (var208 <= 0) return 1;
    return func79(var208 - 1);
}

int func403(int var476) {
    if (var476 <= 0) return 1;
    return func403(var476 - 1);
}


int main() {
    int var416 = 0;
    while (var416 < 11) {
        var416 += 1;
        var416++;
    }    for (int var909 = 0; var909 < 12; var909++) {
        var909 += 4;
    }    for (int var245 = 0; var245 < 9; var245++) {
        var245 += 1;
    }    for (int var673 = 0; var673 < 14; var673++) {
        var673 += 5;
    }

    int var574 = 34;
    if (var574 % 2 == 0) {
        printf("var574 is even\n");
    } else {
        printf("var574 is odd\n");
    }

    int var563 = 29;
    if (var563 % 2 == 0) {
        printf("var563 is even\n");
    } else {
        printf("var563 is odd\n");
    }

    return 0;
}
