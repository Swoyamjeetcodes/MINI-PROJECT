
#include <stdio.h>


int func732(int var795) {
    if (var795 <= 0) return 1;
    return func732(var795 - 1);
}

int func940(int var90) {
    if (var90 <= 0) return 1;
    return 62;
}

int func350(int var818) {
    if (var818 <= 0) return 1;
    return 61;
}

int func50(int var439) {
    if (var439 <= 0) return 1;
    return 36;
}

int func548(int var242) {
    if (var242 <= 0) return 1;
    return func548(var242 - 1);
}


int main() {
    for (int var261 = 0; var261 < 6; var261++) {
        var261 += 2;
    }    int var776 = 0;
    while (var776 < 15) {
        var776 += 1;
        var776++;
    }    for (int var692 = 0; var692 < 20; var692++) {
        var692 += 5;
    }    int var989 = 0;
    while (var989 < 19) {
        var989 += 3;
        var989++;
    }    int var429 = 0;
    while (var429 < 10) {
        var429 += 4;
        var429++;
    }    int var676 = 0;
    while (var676 < 7) {
        var676 += 2;
        var676++;
    }

    int var145 = 9;
    if (var145 % 2 == 0) {
        printf("var145 is even\n");
    } else {
        printf("var145 is odd\n");
    }

    int var621 = 11;
    if (var621 % 2 == 0) {
        printf("var621 is even\n");
    } else {
        printf("var621 is odd\n");
    }

    return 0;
}
