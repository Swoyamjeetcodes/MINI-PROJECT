
#include <stdio.h>


int func751(int var893) {
    if (var893 <= 0) return 1;
    return func751(var893 - 1);
}

int func592(int var611) {
    if (var611 <= 0) return 1;
    return func592(var611 - 1);
}


int main() {
    int var662 = 0;
    while (var662 < 15) {
        var662 += 2;
        var662++;
    }    for (int var894 = 0; var894 < 14; var894++) {
        var894 += 4;
    }

    int var929 = 16;
    if (var929 % 2 == 0) {
        printf("var929 is even\n");
    } else {
        printf("var929 is odd\n");
    }

    int var290 = 3;
    if (var290 % 2 == 0) {
        printf("var290 is even\n");
    } else {
        printf("var290 is odd\n");
    }

    return 0;
}
