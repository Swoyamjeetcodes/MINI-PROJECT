
#include <stdio.h>


int func908(int var514) {
    if (var514 <= 0) return 1;
    return func908(var514 - 1);
}


int main() {
    int var298 = 0;
    while (var298 < 7) {
        var298 += 5;
        var298++;
    }    int var501 = 0;
    while (var501 < 16) {
        var501 += 5;
        var501++;
    }    for (int var51 = 0; var51 < 13; var51++) {
        var51 += 5;
    }

    int var31 = 52;
    if (var31 % 2 == 0) {
        printf("var31 is even\n");
    } else {
        printf("var31 is odd\n");
    }

    return 0;
}
