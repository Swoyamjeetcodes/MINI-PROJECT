
#include <stdio.h>


int func100(int var600) {
    if (var600 <= 0) return 1;
    return func100(var600 - 1);
}


int main() {
    for (int var908 = 0; var908 < 12; var908++) {
        var908 += 4;
    }    int var760 = 0;
    while (var760 < 9) {
        var760 += 2;
        var760++;
    }    for (int var518 = 0; var518 < 13; var518++) {
        var518 += 2;
    }

    int var285 = 37;
    if (var285 % 2 == 0) {
        printf("var285 is even\n");
    } else {
        printf("var285 is odd\n");
    }

    return 0;
}
