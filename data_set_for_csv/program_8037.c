
#include <stdio.h>


int func15(int var554) {
    if (var554 <= 0) return 1;
    return func15(var554 - 1);
}


int main() {
    int var732 = 0;
    while (var732 < 17) {
        var732 += 1;
        var732++;
    }    int var537 = 0;
    while (var537 < 13) {
        var537 += 3;
        var537++;
    }    int var707 = 0;
    while (var707 < 5) {
        var707 += 4;
        var707++;
    }

    int var268 = 76;
    if (var268 % 2 == 0) {
        printf("var268 is even\n");
    } else {
        printf("var268 is odd\n");
    }

    int var778 = 25;
    if (var778 % 2 == 0) {
        printf("var778 is even\n");
    } else {
        printf("var778 is odd\n");
    }

    int var544 = 33;
    if (var544 % 2 == 0) {
        printf("var544 is even\n");
    } else {
        printf("var544 is odd\n");
    }

    return 0;
}
