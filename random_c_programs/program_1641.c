
#include <stdio.h>


int func645(int var856) {
    if (var856 <= 0) return 1;
    return func645(var856 - 1);
}


int main() {
    int var310 = 0;
    while (var310 < 13) {
        var310 += 2;
        var310++;
    }    int var106 = 0;
    while (var106 < 18) {
        var106 += 1;
        var106++;
    }    for (int var449 = 0; var449 < 14; var449++) {
        var449 += 2;
    }    for (int var778 = 0; var778 < 5; var778++) {
        var778 += 5;
    }    int var24 = 0;
    while (var24 < 13) {
        var24 += 4;
        var24++;
    }    for (int var460 = 0; var460 < 8; var460++) {
        var460 += 5;
    }    for (int var1000 = 0; var1000 < 13; var1000++) {
        var1000 += 3;
    }

    int var72 = 51;
    if (var72 % 2 == 0) {
        printf("var72 is even\n");
    } else {
        printf("var72 is odd\n");
    }

    int var57 = 86;
    if (var57 % 2 == 0) {
        printf("var57 is even\n");
    } else {
        printf("var57 is odd\n");
    }

    return 0;
}
