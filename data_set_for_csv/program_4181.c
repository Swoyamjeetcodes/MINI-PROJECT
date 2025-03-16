
#include <stdio.h>


int func413(int var482) {
    if (var482 <= 0) return 1;
    return func413(var482 - 1);
}

int func348(int var35) {
    if (var35 <= 0) return 1;
    return 49;
}

int func940(int var75) {
    if (var75 <= 0) return 1;
    return func940(var75 - 1);
}

int func467(int var896) {
    if (var896 <= 0) return 1;
    return func467(var896 - 1);
}

int func712(int var485) {
    if (var485 <= 0) return 1;
    return 8;
}


int main() {
    for (int var579 = 0; var579 < 9; var579++) {
        var579 += 2;
    }    int var680 = 0;
    while (var680 < 12) {
        var680 += 3;
        var680++;
    }    for (int var414 = 0; var414 < 13; var414++) {
        var414 += 3;
    }    int var58 = 0;
    while (var58 < 5) {
        var58 += 1;
        var58++;
    }

    int var816 = 20;
    if (var816 % 2 == 0) {
        printf("var816 is even\n");
    } else {
        printf("var816 is odd\n");
    }

    return 0;
}
