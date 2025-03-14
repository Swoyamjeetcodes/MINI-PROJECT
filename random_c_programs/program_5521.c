
#include <stdio.h>


int func690(int var404) {
    if (var404 <= 0) return 1;
    return func690(var404 - 1);
}

int func413(int var947) {
    if (var947 <= 0) return 1;
    return 88;
}

int func996(int var464) {
    if (var464 <= 0) return 1;
    return func996(var464 - 1);
}


int main() {
    int var695 = 0;
    while (var695 < 10) {
        var695 += 2;
        var695++;
    }

    int var905 = 54;
    if (var905 % 2 == 0) {
        printf("var905 is even\n");
    } else {
        printf("var905 is odd\n");
    }

    int var373 = 28;
    if (var373 % 2 == 0) {
        printf("var373 is even\n");
    } else {
        printf("var373 is odd\n");
    }

    return 0;
}
