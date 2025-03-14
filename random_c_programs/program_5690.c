
#include <stdio.h>


int func687(int var891) {
    if (var891 <= 0) return 1;
    return 99;
}

int func375(int var424) {
    if (var424 <= 0) return 1;
    return func375(var424 - 1);
}

int func253(int var372) {
    if (var372 <= 0) return 1;
    return func253(var372 - 1);
}

int func142(int var794) {
    if (var794 <= 0) return 1;
    return func142(var794 - 1);
}

int func458(int var879) {
    if (var879 <= 0) return 1;
    return 100;
}


int main() {
    int var346 = 0;
    while (var346 < 17) {
        var346 += 2;
        var346++;
    }    for (int var489 = 0; var489 < 6; var489++) {
        var489 += 1;
    }    int var290 = 0;
    while (var290 < 13) {
        var290 += 2;
        var290++;
    }

    int var939 = 64;
    if (var939 % 2 == 0) {
        printf("var939 is even\n");
    } else {
        printf("var939 is odd\n");
    }

    int var29 = 47;
    if (var29 % 2 == 0) {
        printf("var29 is even\n");
    } else {
        printf("var29 is odd\n");
    }

    return 0;
}
