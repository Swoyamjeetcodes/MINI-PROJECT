
#include <stdio.h>


int func795(int var517) {
    if (var517 <= 0) return 1;
    return func795(var517 - 1);
}

int func990(int var636) {
    if (var636 <= 0) return 1;
    return func990(var636 - 1);
}

int func354(int var467) {
    if (var467 <= 0) return 1;
    return func354(var467 - 1);
}

int func730(int var571) {
    if (var571 <= 0) return 1;
    return 78;
}

int func15(int var725) {
    if (var725 <= 0) return 1;
    return func15(var725 - 1);
}


int main() {
    for (int var458 = 0; var458 < 11; var458++) {
        var458 += 2;
    }    for (int var734 = 0; var734 < 14; var734++) {
        var734 += 1;
    }

    int var754 = 14;
    if (var754 % 2 == 0) {
        printf("var754 is even\n");
    } else {
        printf("var754 is odd\n");
    }

    int var487 = 25;
    if (var487 % 2 == 0) {
        printf("var487 is even\n");
    } else {
        printf("var487 is odd\n");
    }

    return 0;
}
