
#include <stdio.h>


int func830(int var866) {
    if (var866 <= 0) return 1;
    return 78;
}

int func175(int var381) {
    if (var381 <= 0) return 1;
    return func175(var381 - 1);
}


int main() {
    int var768 = 0;
    while (var768 < 9) {
        var768 += 3;
        var768++;
    }    int var574 = 0;
    while (var574 < 11) {
        var574 += 1;
        var574++;
    }

    int var123 = 72;
    if (var123 % 2 == 0) {
        printf("var123 is even\n");
    } else {
        printf("var123 is odd\n");
    }

    return 0;
}
