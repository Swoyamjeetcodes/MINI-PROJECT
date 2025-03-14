
#include <stdio.h>


int func533(int var519) {
    if (var519 <= 0) return 1;
    return func533(var519 - 1);
}


int main() {
    int var133 = 0;
    while (var133 < 9) {
        var133 += 5;
        var133++;
    }    for (int var254 = 0; var254 < 19; var254++) {
        var254 += 5;
    }    int var244 = 0;
    while (var244 < 10) {
        var244 += 2;
        var244++;
    }

    int var960 = 88;
    if (var960 % 2 == 0) {
        printf("var960 is even\n");
    } else {
        printf("var960 is odd\n");
    }

    return 0;
}
