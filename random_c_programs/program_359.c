
#include <stdio.h>


int func636(int var929) {
    if (var929 <= 0) return 1;
    return 35;
}

int func178(int var381) {
    if (var381 <= 0) return 1;
    return func178(var381 - 1);
}


int main() {
    int var184 = 0;
    while (var184 < 7) {
        var184 += 4;
        var184++;
    }

    int var28 = 17;
    if (var28 % 2 == 0) {
        printf("var28 is even\n");
    } else {
        printf("var28 is odd\n");
    }

    int var513 = 9;
    if (var513 % 2 == 0) {
        printf("var513 is even\n");
    } else {
        printf("var513 is odd\n");
    }

    int var910 = 48;
    if (var910 % 2 == 0) {
        printf("var910 is even\n");
    } else {
        printf("var910 is odd\n");
    }

    return 0;
}
