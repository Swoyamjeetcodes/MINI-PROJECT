
#include <stdio.h>


int func64(int var508) {
    if (var508 <= 0) return 1;
    return func64(var508 - 1);
}

int func778(int var603) {
    if (var603 <= 0) return 1;
    return func778(var603 - 1);
}


int main() {
    int var504 = 0;
    while (var504 < 14) {
        var504 += 5;
        var504++;
    }    int var872 = 0;
    while (var872 < 12) {
        var872 += 3;
        var872++;
    }

    int var89 = 4;
    if (var89 % 2 == 0) {
        printf("var89 is even\n");
    } else {
        printf("var89 is odd\n");
    }

    int var331 = 61;
    if (var331 % 2 == 0) {
        printf("var331 is even\n");
    } else {
        printf("var331 is odd\n");
    }

    int var523 = 61;
    if (var523 % 2 == 0) {
        printf("var523 is even\n");
    } else {
        printf("var523 is odd\n");
    }

    return 0;
}
