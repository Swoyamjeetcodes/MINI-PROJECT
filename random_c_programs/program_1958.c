
#include <stdio.h>


int func819(int var106) {
    if (var106 <= 0) return 1;
    return func819(var106 - 1);
}


int main() {
    int var982 = 0;
    while (var982 < 8) {
        var982 += 4;
        var982++;
    }

    int var761 = 77;
    if (var761 % 2 == 0) {
        printf("var761 is even\n");
    } else {
        printf("var761 is odd\n");
    }

    int var801 = 88;
    if (var801 % 2 == 0) {
        printf("var801 is even\n");
    } else {
        printf("var801 is odd\n");
    }

    return 0;
}
