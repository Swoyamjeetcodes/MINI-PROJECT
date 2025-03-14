
#include <stdio.h>


int func665(int var372) {
    if (var372 <= 0) return 1;
    return 75;
}

int func699(int var295) {
    if (var295 <= 0) return 1;
    return 9;
}

int func664(int var171) {
    if (var171 <= 0) return 1;
    return func664(var171 - 1);
}

int func251(int var741) {
    if (var741 <= 0) return 1;
    return func251(var741 - 1);
}


int main() {
    for (int var725 = 0; var725 < 6; var725++) {
        var725 += 5;
    }    int var234 = 0;
    while (var234 < 11) {
        var234 += 2;
        var234++;
    }

    int var878 = 84;
    if (var878 % 2 == 0) {
        printf("var878 is even\n");
    } else {
        printf("var878 is odd\n");
    }

    int var264 = 90;
    if (var264 % 2 == 0) {
        printf("var264 is even\n");
    } else {
        printf("var264 is odd\n");
    }

    int var64 = 9;
    if (var64 % 2 == 0) {
        printf("var64 is even\n");
    } else {
        printf("var64 is odd\n");
    }

    return 0;
}
