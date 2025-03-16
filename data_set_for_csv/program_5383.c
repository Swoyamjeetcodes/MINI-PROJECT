
#include <stdio.h>


int func779(int var442) {
    if (var442 <= 0) return 1;
    return 99;
}

int func389(int var163) {
    if (var163 <= 0) return 1;
    return 99;
}

int func458(int var610) {
    if (var610 <= 0) return 1;
    return func458(var610 - 1);
}


int main() {
    int var569 = 0;
    while (var569 < 12) {
        var569 += 3;
        var569++;
    }    for (int var482 = 0; var482 < 19; var482++) {
        var482 += 2;
    }    int var766 = 0;
    while (var766 < 16) {
        var766 += 3;
        var766++;
    }    for (int var771 = 0; var771 < 9; var771++) {
        var771 += 3;
    }    for (int var583 = 0; var583 < 17; var583++) {
        var583 += 2;
    }    for (int var520 = 0; var520 < 11; var520++) {
        var520 += 5;
    }    int var131 = 0;
    while (var131 < 6) {
        var131 += 1;
        var131++;
    }

    int var106 = 0;
    if (var106 % 2 == 0) {
        printf("var106 is even\n");
    } else {
        printf("var106 is odd\n");
    }

    return 0;
}
