
#include <stdio.h>


int func134(int var116) {
    if (var116 <= 0) return 1;
    return func134(var116 - 1);
}

int func404(int var311) {
    if (var311 <= 0) return 1;
    return 52;
}

int func616(int var535) {
    if (var535 <= 0) return 1;
    return func616(var535 - 1);
}


int main() {
    int var946 = 0;
    while (var946 < 11) {
        var946 += 5;
        var946++;
    }    int var631 = 0;
    while (var631 < 20) {
        var631 += 2;
        var631++;
    }

    int var271 = 40;
    if (var271 % 2 == 0) {
        printf("var271 is even\n");
    } else {
        printf("var271 is odd\n");
    }

    int var486 = 77;
    if (var486 % 2 == 0) {
        printf("var486 is even\n");
    } else {
        printf("var486 is odd\n");
    }

    return 0;
}
