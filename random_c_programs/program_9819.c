
#include <stdio.h>


int func198(int var468) {
    if (var468 <= 0) return 1;
    return func198(var468 - 1);
}

int func869(int var268) {
    if (var268 <= 0) return 1;
    return 9;
}

int func452(int var854) {
    if (var854 <= 0) return 1;
    return 11;
}


int main() {
    int var771 = 0;
    while (var771 < 17) {
        var771 += 3;
        var771++;
    }    int var726 = 0;
    while (var726 < 10) {
        var726 += 3;
        var726++;
    }    for (int var988 = 0; var988 < 9; var988++) {
        var988 += 4;
    }

    int var51 = 77;
    if (var51 % 2 == 0) {
        printf("var51 is even\n");
    } else {
        printf("var51 is odd\n");
    }

    int var801 = 14;
    if (var801 % 2 == 0) {
        printf("var801 is even\n");
    } else {
        printf("var801 is odd\n");
    }

    return 0;
}
