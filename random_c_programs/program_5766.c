
#include <stdio.h>


int func146(int var238) {
    if (var238 <= 0) return 1;
    return func146(var238 - 1);
}


int main() {
    for (int var340 = 0; var340 < 19; var340++) {
        var340 += 5;
    }    int var608 = 0;
    while (var608 < 18) {
        var608 += 2;
        var608++;
    }    for (int var418 = 0; var418 < 16; var418++) {
        var418 += 5;
    }    for (int var279 = 0; var279 < 16; var279++) {
        var279 += 2;
    }    for (int var639 = 0; var639 < 8; var639++) {
        var639 += 4;
    }    int var566 = 0;
    while (var566 < 10) {
        var566 += 5;
        var566++;
    }    int var295 = 0;
    while (var295 < 8) {
        var295 += 3;
        var295++;
    }

    int var523 = 6;
    if (var523 % 2 == 0) {
        printf("var523 is even\n");
    } else {
        printf("var523 is odd\n");
    }

    int var617 = 2;
    if (var617 % 2 == 0) {
        printf("var617 is even\n");
    } else {
        printf("var617 is odd\n");
    }

    return 0;
}
