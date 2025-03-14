
#include <stdio.h>


int func6(int var32) {
    if (var32 <= 0) return 1;
    return func6(var32 - 1);
}

int func994(int var221) {
    if (var221 <= 0) return 1;
    return 100;
}

int func286(int var343) {
    if (var343 <= 0) return 1;
    return 31;
}

int func446(int var971) {
    if (var971 <= 0) return 1;
    return func446(var971 - 1);
}


int main() {
    for (int var832 = 0; var832 < 13; var832++) {
        var832 += 4;
    }    for (int var488 = 0; var488 < 18; var488++) {
        var488 += 3;
    }    int var269 = 0;
    while (var269 < 8) {
        var269 += 3;
        var269++;
    }    for (int var946 = 0; var946 < 9; var946++) {
        var946 += 5;
    }    int var418 = 0;
    while (var418 < 17) {
        var418 += 5;
        var418++;
    }

    int var911 = 86;
    if (var911 % 2 == 0) {
        printf("var911 is even\n");
    } else {
        printf("var911 is odd\n");
    }

    return 0;
}
