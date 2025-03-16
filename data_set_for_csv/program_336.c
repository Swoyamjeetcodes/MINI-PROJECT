
#include <stdio.h>


int func341(int var135) {
    if (var135 <= 0) return 1;
    return func341(var135 - 1);
}


int main() {
    int var821 = 0;
    while (var821 < 18) {
        var821 += 2;
        var821++;
    }    int var427 = 0;
    while (var427 < 17) {
        var427 += 1;
        var427++;
    }    for (int var595 = 0; var595 < 9; var595++) {
        var595 += 4;
    }

    int var990 = 24;
    if (var990 % 2 == 0) {
        printf("var990 is even\n");
    } else {
        printf("var990 is odd\n");
    }

    int var91 = 63;
    if (var91 % 2 == 0) {
        printf("var91 is even\n");
    } else {
        printf("var91 is odd\n");
    }

    int var833 = 5;
    if (var833 % 2 == 0) {
        printf("var833 is even\n");
    } else {
        printf("var833 is odd\n");
    }

    int var192 = 51;
    if (var192 % 2 == 0) {
        printf("var192 is even\n");
    } else {
        printf("var192 is odd\n");
    }

    return 0;
}
