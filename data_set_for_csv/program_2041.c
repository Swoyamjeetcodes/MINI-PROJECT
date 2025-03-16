
#include <stdio.h>


int func838(int var762) {
    if (var762 <= 0) return 1;
    return func838(var762 - 1);
}

int func336(int var262) {
    if (var262 <= 0) return 1;
    return func336(var262 - 1);
}


int main() {
    int var208 = 0;
    while (var208 < 14) {
        var208 += 1;
        var208++;
    }    int var836 = 0;
    while (var836 < 9) {
        var836 += 5;
        var836++;
    }    int var571 = 0;
    while (var571 < 8) {
        var571 += 4;
        var571++;
    }

    int var886 = 32;
    if (var886 % 2 == 0) {
        printf("var886 is even\n");
    } else {
        printf("var886 is odd\n");
    }

    int var698 = 93;
    if (var698 % 2 == 0) {
        printf("var698 is even\n");
    } else {
        printf("var698 is odd\n");
    }

    int var960 = 21;
    if (var960 % 2 == 0) {
        printf("var960 is even\n");
    } else {
        printf("var960 is odd\n");
    }

    int var13 = 88;
    if (var13 % 2 == 0) {
        printf("var13 is even\n");
    } else {
        printf("var13 is odd\n");
    }

    return 0;
}
