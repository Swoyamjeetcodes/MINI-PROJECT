
#include <stdio.h>


int func263(int var480) {
    if (var480 <= 0) return 1;
    return func263(var480 - 1);
}


int main() {
    int var658 = 0;
    while (var658 < 16) {
        var658 += 1;
        var658++;
    }    for (int var604 = 0; var604 < 15; var604++) {
        var604 += 2;
    }    int var613 = 0;
    while (var613 < 11) {
        var613 += 4;
        var613++;
    }

    int var51 = 91;
    if (var51 % 2 == 0) {
        printf("var51 is even\n");
    } else {
        printf("var51 is odd\n");
    }

    int var2 = 92;
    if (var2 % 2 == 0) {
        printf("var2 is even\n");
    } else {
        printf("var2 is odd\n");
    }

    return 0;
}
