
#include <stdio.h>


int func406(int var879) {
    if (var879 <= 0) return 1;
    return func406(var879 - 1);
}


int main() {
    int var897 = 0;
    while (var897 < 18) {
        var897 += 1;
        var897++;
    }    for (int var461 = 0; var461 < 16; var461++) {
        var461 += 4;
    }    for (int var627 = 0; var627 < 8; var627++) {
        var627 += 4;
    }

    int var792 = 36;
    if (var792 % 2 == 0) {
        printf("var792 is even\n");
    } else {
        printf("var792 is odd\n");
    }

    int var861 = 98;
    if (var861 % 2 == 0) {
        printf("var861 is even\n");
    } else {
        printf("var861 is odd\n");
    }

    return 0;
}
