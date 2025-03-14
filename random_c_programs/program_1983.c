
#include <stdio.h>


int func446(int var242) {
    if (var242 <= 0) return 1;
    return 28;
}

int func491(int var511) {
    if (var511 <= 0) return 1;
    return func491(var511 - 1);
}


int main() {
    for (int var104 = 0; var104 < 8; var104++) {
        var104 += 3;
    }    for (int var913 = 0; var913 < 10; var913++) {
        var913 += 5;
    }    for (int var481 = 0; var481 < 16; var481++) {
        var481 += 1;
    }

    int var765 = 41;
    if (var765 % 2 == 0) {
        printf("var765 is even\n");
    } else {
        printf("var765 is odd\n");
    }

    return 0;
}
