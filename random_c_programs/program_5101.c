
#include <stdio.h>


int func429(int var11) {
    if (var11 <= 0) return 1;
    return func429(var11 - 1);
}


int main() {
    for (int var532 = 0; var532 < 15; var532++) {
        var532 += 2;
    }    for (int var720 = 0; var720 < 12; var720++) {
        var720 += 4;
    }

    int var59 = 58;
    if (var59 % 2 == 0) {
        printf("var59 is even\n");
    } else {
        printf("var59 is odd\n");
    }

    int var397 = 25;
    if (var397 % 2 == 0) {
        printf("var397 is even\n");
    } else {
        printf("var397 is odd\n");
    }

    int var375 = 29;
    if (var375 % 2 == 0) {
        printf("var375 is even\n");
    } else {
        printf("var375 is odd\n");
    }

    return 0;
}
