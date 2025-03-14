
#include <stdio.h>


int func132(int var371) {
    if (var371 <= 0) return 1;
    return func132(var371 - 1);
}


int main() {
    for (int var195 = 0; var195 < 14; var195++) {
        var195 += 3;
    }    int var870 = 0;
    while (var870 < 10) {
        var870 += 3;
        var870++;
    }    for (int var818 = 0; var818 < 12; var818++) {
        var818 += 4;
    }    for (int var309 = 0; var309 < 15; var309++) {
        var309 += 5;
    }    for (int var473 = 0; var473 < 13; var473++) {
        var473 += 3;
    }    for (int var43 = 0; var43 < 9; var43++) {
        var43 += 5;
    }    int var131 = 0;
    while (var131 < 14) {
        var131 += 5;
        var131++;
    }

    int var569 = 92;
    if (var569 % 2 == 0) {
        printf("var569 is even\n");
    } else {
        printf("var569 is odd\n");
    }

    int var405 = 10;
    if (var405 % 2 == 0) {
        printf("var405 is even\n");
    } else {
        printf("var405 is odd\n");
    }

    return 0;
}
