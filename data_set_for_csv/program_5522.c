
#include <stdio.h>


int func510(int var468) {
    if (var468 <= 0) return 1;
    return 3;
}

int func527(int var661) {
    if (var661 <= 0) return 1;
    return func527(var661 - 1);
}

int func567(int var645) {
    if (var645 <= 0) return 1;
    return 100;
}

int func13(int var626) {
    if (var626 <= 0) return 1;
    return func13(var626 - 1);
}

int func846(int var481) {
    if (var481 <= 0) return 1;
    return func846(var481 - 1);
}


int main() {
    int var180 = 0;
    while (var180 < 10) {
        var180 += 5;
        var180++;
    }

    int var60 = 91;
    if (var60 % 2 == 0) {
        printf("var60 is even\n");
    } else {
        printf("var60 is odd\n");
    }

    int var703 = 60;
    if (var703 % 2 == 0) {
        printf("var703 is even\n");
    } else {
        printf("var703 is odd\n");
    }

    int var113 = 30;
    if (var113 % 2 == 0) {
        printf("var113 is even\n");
    } else {
        printf("var113 is odd\n");
    }

    return 0;
}
