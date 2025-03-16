
#include <stdio.h>


int func96(int var175) {
    if (var175 <= 0) return 1;
    return func96(var175 - 1);
}


int main() {
    for (int var103 = 0; var103 < 15; var103++) {
        var103 += 4;
    }    for (int var89 = 0; var89 < 19; var89++) {
        var89 += 3;
    }    for (int var23 = 0; var23 < 19; var23++) {
        var23 += 3;
    }

    int var616 = 72;
    if (var616 % 2 == 0) {
        printf("var616 is even\n");
    } else {
        printf("var616 is odd\n");
    }

    int var436 = 52;
    if (var436 % 2 == 0) {
        printf("var436 is even\n");
    } else {
        printf("var436 is odd\n");
    }

    int var861 = 90;
    if (var861 % 2 == 0) {
        printf("var861 is even\n");
    } else {
        printf("var861 is odd\n");
    }

    return 0;
}
