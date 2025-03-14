
#include <stdio.h>


int func949(int var645) {
    if (var645 <= 0) return 1;
    return func949(var645 - 1);
}


int main() {
    int var419 = 0;
    while (var419 < 6) {
        var419 += 2;
        var419++;
    }

    int var657 = 26;
    if (var657 % 2 == 0) {
        printf("var657 is even\n");
    } else {
        printf("var657 is odd\n");
    }

    int var451 = 90;
    if (var451 % 2 == 0) {
        printf("var451 is even\n");
    } else {
        printf("var451 is odd\n");
    }

    return 0;
}
