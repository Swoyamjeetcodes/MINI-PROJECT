
#include <stdio.h>


int func382(int var655) {
    if (var655 <= 0) return 1;
    return 6;
}

int func703(int var290) {
    if (var290 <= 0) return 1;
    return func703(var290 - 1);
}


int main() {
    for (int var89 = 0; var89 < 16; var89++) {
        var89 += 5;
    }    int var398 = 0;
    while (var398 < 15) {
        var398 += 4;
        var398++;
    }

    int var384 = 93;
    if (var384 % 2 == 0) {
        printf("var384 is even\n");
    } else {
        printf("var384 is odd\n");
    }

    return 0;
}
