
#include <stdio.h>


int func438(int var268) {
    if (var268 <= 0) return 1;
    return 45;
}

int func629(int var303) {
    if (var303 <= 0) return 1;
    return func629(var303 - 1);
}


int main() {
    for (int var839 = 0; var839 < 18; var839++) {
        var839 += 1;
    }    int var716 = 0;
    while (var716 < 12) {
        var716 += 4;
        var716++;
    }    for (int var59 = 0; var59 < 19; var59++) {
        var59 += 3;
    }

    int var88 = 83;
    if (var88 % 2 == 0) {
        printf("var88 is even\n");
    } else {
        printf("var88 is odd\n");
    }

    int var636 = 6;
    if (var636 % 2 == 0) {
        printf("var636 is even\n");
    } else {
        printf("var636 is odd\n");
    }

    return 0;
}
