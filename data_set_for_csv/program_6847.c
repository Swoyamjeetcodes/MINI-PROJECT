
#include <stdio.h>


int func834(int var545) {
    if (var545 <= 0) return 1;
    return func834(var545 - 1);
}


int main() {
    int var273 = 0;
    while (var273 < 15) {
        var273 += 3;
        var273++;
    }    int var889 = 0;
    while (var889 < 18) {
        var889 += 3;
        var889++;
    }    for (int var67 = 0; var67 < 7; var67++) {
        var67 += 5;
    }

    int var502 = 38;
    if (var502 % 2 == 0) {
        printf("var502 is even\n");
    } else {
        printf("var502 is odd\n");
    }

    int var15 = 63;
    if (var15 % 2 == 0) {
        printf("var15 is even\n");
    } else {
        printf("var15 is odd\n");
    }

    return 0;
}
