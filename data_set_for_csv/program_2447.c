
#include <stdio.h>


int func117(int var10) {
    if (var10 <= 0) return 1;
    return func117(var10 - 1);
}


int main() {
    for (int var789 = 0; var789 < 18; var789++) {
        var789 += 5;
    }    int var106 = 0;
    while (var106 < 20) {
        var106 += 2;
        var106++;
    }    int var58 = 0;
    while (var58 < 20) {
        var58 += 5;
        var58++;
    }

    int var380 = 53;
    if (var380 % 2 == 0) {
        printf("var380 is even\n");
    } else {
        printf("var380 is odd\n");
    }

    int var594 = 90;
    if (var594 % 2 == 0) {
        printf("var594 is even\n");
    } else {
        printf("var594 is odd\n");
    }

    return 0;
}
