
#include <stdio.h>


int func12(int var896) {
    if (var896 <= 0) return 1;
    return func12(var896 - 1);
}

int func742(int var517) {
    if (var517 <= 0) return 1;
    return func742(var517 - 1);
}


int main() {
    int var559 = 0;
    while (var559 < 15) {
        var559 += 2;
        var559++;
    }    for (int var776 = 0; var776 < 10; var776++) {
        var776 += 5;
    }

    int var493 = 81;
    if (var493 % 2 == 0) {
        printf("var493 is even\n");
    } else {
        printf("var493 is odd\n");
    }

    int var8 = 91;
    if (var8 % 2 == 0) {
        printf("var8 is even\n");
    } else {
        printf("var8 is odd\n");
    }

    int var843 = 54;
    if (var843 % 2 == 0) {
        printf("var843 is even\n");
    } else {
        printf("var843 is odd\n");
    }

    return 0;
}
