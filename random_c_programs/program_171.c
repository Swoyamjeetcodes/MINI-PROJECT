
#include <stdio.h>


int func16(int var34) {
    if (var34 <= 0) return 1;
    return func16(var34 - 1);
}


int main() {
    for (int var925 = 0; var925 < 11; var925++) {
        var925 += 5;
    }    int var741 = 0;
    while (var741 < 11) {
        var741 += 4;
        var741++;
    }    int var657 = 0;
    while (var657 < 11) {
        var657 += 2;
        var657++;
    }    int var634 = 0;
    while (var634 < 5) {
        var634 += 4;
        var634++;
    }    for (int var927 = 0; var927 < 18; var927++) {
        var927 += 5;
    }    for (int var372 = 0; var372 < 9; var372++) {
        var372 += 3;
    }    for (int var33 = 0; var33 < 20; var33++) {
        var33 += 1;
    }

    int var940 = 59;
    if (var940 % 2 == 0) {
        printf("var940 is even\n");
    } else {
        printf("var940 is odd\n");
    }

    int var659 = 1;
    if (var659 % 2 == 0) {
        printf("var659 is even\n");
    } else {
        printf("var659 is odd\n");
    }

    return 0;
}
