
#include <stdio.h>


int func650(int var338) {
    if (var338 <= 0) return 1;
    return func650(var338 - 1);
}

int func136(int var80) {
    if (var80 <= 0) return 1;
    return func136(var80 - 1);
}

int func930(int var358) {
    if (var358 <= 0) return 1;
    return 86;
}


int main() {
    for (int var4 = 0; var4 < 13; var4++) {
        var4 += 3;
    }    int var606 = 0;
    while (var606 < 10) {
        var606 += 2;
        var606++;
    }    for (int var803 = 0; var803 < 19; var803++) {
        var803 += 3;
    }

    int var528 = 68;
    if (var528 % 2 == 0) {
        printf("var528 is even\n");
    } else {
        printf("var528 is odd\n");
    }

    int var476 = 55;
    if (var476 % 2 == 0) {
        printf("var476 is even\n");
    } else {
        printf("var476 is odd\n");
    }

    return 0;
}
