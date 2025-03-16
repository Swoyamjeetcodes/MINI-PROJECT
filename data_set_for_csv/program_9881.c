
#include <stdio.h>


int func894(int var737) {
    if (var737 <= 0) return 1;
    return func894(var737 - 1);
}

int func675(int var519) {
    if (var519 <= 0) return 1;
    return 8;
}

int func182(int var904) {
    if (var904 <= 0) return 1;
    return func182(var904 - 1);
}


int main() {
    for (int var674 = 0; var674 < 6; var674++) {
        var674 += 5;
    }    for (int var700 = 0; var700 < 5; var700++) {
        var700 += 5;
    }

    int var369 = 8;
    if (var369 % 2 == 0) {
        printf("var369 is even\n");
    } else {
        printf("var369 is odd\n");
    }

    int var185 = 64;
    if (var185 % 2 == 0) {
        printf("var185 is even\n");
    } else {
        printf("var185 is odd\n");
    }

    return 0;
}
