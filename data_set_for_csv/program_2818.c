
#include <stdio.h>


int func335(int var402) {
    if (var402 <= 0) return 1;
    return func335(var402 - 1);
}


int main() {
    int var593 = 0;
    while (var593 < 18) {
        var593 += 2;
        var593++;
    }    for (int var449 = 0; var449 < 7; var449++) {
        var449 += 4;
    }

    int var45 = 86;
    if (var45 % 2 == 0) {
        printf("var45 is even\n");
    } else {
        printf("var45 is odd\n");
    }

    int var69 = 37;
    if (var69 % 2 == 0) {
        printf("var69 is even\n");
    } else {
        printf("var69 is odd\n");
    }

    return 0;
}
