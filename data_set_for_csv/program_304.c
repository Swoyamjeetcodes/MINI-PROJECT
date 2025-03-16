
#include <stdio.h>


int func653(int var12) {
    if (var12 <= 0) return 1;
    return func653(var12 - 1);
}


int main() {
    int var770 = 0;
    while (var770 < 10) {
        var770 += 2;
        var770++;
    }    for (int var210 = 0; var210 < 9; var210++) {
        var210 += 3;
    }    for (int var501 = 0; var501 < 7; var501++) {
        var501 += 4;
    }

    int var885 = 77;
    if (var885 % 2 == 0) {
        printf("var885 is even\n");
    } else {
        printf("var885 is odd\n");
    }

    int var320 = 84;
    if (var320 % 2 == 0) {
        printf("var320 is even\n");
    } else {
        printf("var320 is odd\n");
    }

    int var759 = 32;
    if (var759 % 2 == 0) {
        printf("var759 is even\n");
    } else {
        printf("var759 is odd\n");
    }

    return 0;
}
