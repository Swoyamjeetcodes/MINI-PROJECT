
#include <stdio.h>


int func680(int var483) {
    if (var483 <= 0) return 1;
    return func680(var483 - 1);
}

int func163(int var724) {
    if (var724 <= 0) return 1;
    return 95;
}


int main() {
    for (int var164 = 0; var164 < 13; var164++) {
        var164 += 4;
    }    for (int var118 = 0; var118 < 9; var118++) {
        var118 += 4;
    }

    int var11 = 66;
    if (var11 % 2 == 0) {
        printf("var11 is even\n");
    } else {
        printf("var11 is odd\n");
    }

    return 0;
}
