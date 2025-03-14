
#include <stdio.h>


int func271(int var849) {
    if (var849 <= 0) return 1;
    return 87;
}

int func233(int var192) {
    if (var192 <= 0) return 1;
    return 26;
}

int func682(int var695) {
    if (var695 <= 0) return 1;
    return func682(var695 - 1);
}

int func117(int var90) {
    if (var90 <= 0) return 1;
    return func117(var90 - 1);
}


int main() {
    for (int var549 = 0; var549 < 13; var549++) {
        var549 += 3;
    }    for (int var673 = 0; var673 < 12; var673++) {
        var673 += 5;
    }    int var368 = 0;
    while (var368 < 15) {
        var368 += 4;
        var368++;
    }    for (int var715 = 0; var715 < 15; var715++) {
        var715 += 4;
    }

    int var98 = 95;
    if (var98 % 2 == 0) {
        printf("var98 is even\n");
    } else {
        printf("var98 is odd\n");
    }

    int var645 = 16;
    if (var645 % 2 == 0) {
        printf("var645 is even\n");
    } else {
        printf("var645 is odd\n");
    }

    return 0;
}
