
#include <stdio.h>


int func151(int var19) {
    if (var19 <= 0) return 1;
    return func151(var19 - 1);
}


int main() {
    for (int var238 = 0; var238 < 19; var238++) {
        var238 += 1;
    }    for (int var942 = 0; var942 < 14; var942++) {
        var942 += 2;
    }

    int var660 = 29;
    if (var660 % 2 == 0) {
        printf("var660 is even\n");
    } else {
        printf("var660 is odd\n");
    }

    int var183 = 4;
    if (var183 % 2 == 0) {
        printf("var183 is even\n");
    } else {
        printf("var183 is odd\n");
    }

    int var160 = 39;
    if (var160 % 2 == 0) {
        printf("var160 is even\n");
    } else {
        printf("var160 is odd\n");
    }

    return 0;
}
