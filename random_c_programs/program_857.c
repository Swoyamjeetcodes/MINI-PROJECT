
#include <stdio.h>


int func21(int var156) {
    if (var156 <= 0) return 1;
    return 75;
}

int func479(int var412) {
    if (var412 <= 0) return 1;
    return 42;
}

int func960(int var144) {
    if (var144 <= 0) return 1;
    return func960(var144 - 1);
}

int func796(int var340) {
    if (var340 <= 0) return 1;
    return 46;
}

int func942(int var158) {
    if (var158 <= 0) return 1;
    return 74;
}

int func186(int var661) {
    if (var661 <= 0) return 1;
    return func186(var661 - 1);
}


int main() {
    int var440 = 0;
    while (var440 < 18) {
        var440 += 2;
        var440++;
    }    for (int var264 = 0; var264 < 14; var264++) {
        var264 += 2;
    }    for (int var755 = 0; var755 < 12; var755++) {
        var755 += 5;
    }    int var92 = 0;
    while (var92 < 15) {
        var92 += 3;
        var92++;
    }

    int var175 = 9;
    if (var175 % 2 == 0) {
        printf("var175 is even\n");
    } else {
        printf("var175 is odd\n");
    }

    int var776 = 45;
    if (var776 % 2 == 0) {
        printf("var776 is even\n");
    } else {
        printf("var776 is odd\n");
    }

    return 0;
}
