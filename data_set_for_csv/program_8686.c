
#include <stdio.h>


int func429(int var79) {
    if (var79 <= 0) return 1;
    return func429(var79 - 1);
}


int main() {
    int var255 = 0;
    while (var255 < 6) {
        var255 += 2;
        var255++;
    }    int var500 = 0;
    while (var500 < 9) {
        var500 += 5;
        var500++;
    }    int var85 = 0;
    while (var85 < 19) {
        var85 += 5;
        var85++;
    }

    int var75 = 32;
    if (var75 % 2 == 0) {
        printf("var75 is even\n");
    } else {
        printf("var75 is odd\n");
    }

    int var558 = 22;
    if (var558 % 2 == 0) {
        printf("var558 is even\n");
    } else {
        printf("var558 is odd\n");
    }

    return 0;
}
