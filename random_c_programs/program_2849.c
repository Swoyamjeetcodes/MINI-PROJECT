
#include <stdio.h>


int func567(int var644) {
    if (var644 <= 0) return 1;
    return func567(var644 - 1);
}

int func487(int var829) {
    if (var829 <= 0) return 1;
    return 21;
}

int func251(int var301) {
    if (var301 <= 0) return 1;
    return 56;
}

int func101(int var123) {
    if (var123 <= 0) return 1;
    return func101(var123 - 1);
}


int main() {
    for (int var985 = 0; var985 < 20; var985++) {
        var985 += 5;
    }    for (int var933 = 0; var933 < 8; var933++) {
        var933 += 5;
    }    int var378 = 0;
    while (var378 < 18) {
        var378 += 5;
        var378++;
    }    for (int var980 = 0; var980 < 20; var980++) {
        var980 += 4;
    }

    int var388 = 25;
    if (var388 % 2 == 0) {
        printf("var388 is even\n");
    } else {
        printf("var388 is odd\n");
    }

    int var773 = 18;
    if (var773 % 2 == 0) {
        printf("var773 is even\n");
    } else {
        printf("var773 is odd\n");
    }

    return 0;
}
