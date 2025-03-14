
#include <stdio.h>


int func137(int var301) {
    if (var301 <= 0) return 1;
    return 71;
}

int func895(int var5) {
    if (var5 <= 0) return 1;
    return 54;
}

int func949(int var785) {
    if (var785 <= 0) return 1;
    return func949(var785 - 1);
}

int func682(int var140) {
    if (var140 <= 0) return 1;
    return func682(var140 - 1);
}

int func917(int var692) {
    if (var692 <= 0) return 1;
    return 84;
}


int main() {
    int var753 = 0;
    while (var753 < 6) {
        var753 += 3;
        var753++;
    }    int var584 = 0;
    while (var584 < 15) {
        var584 += 5;
        var584++;
    }    for (int var893 = 0; var893 < 13; var893++) {
        var893 += 5;
    }    for (int var204 = 0; var204 < 14; var204++) {
        var204 += 3;
    }    int var814 = 0;
    while (var814 < 13) {
        var814 += 2;
        var814++;
    }    for (int var381 = 0; var381 < 17; var381++) {
        var381 += 1;
    }

    int var925 = 68;
    if (var925 % 2 == 0) {
        printf("var925 is even\n");
    } else {
        printf("var925 is odd\n");
    }

    int var350 = 69;
    if (var350 % 2 == 0) {
        printf("var350 is even\n");
    } else {
        printf("var350 is odd\n");
    }

    return 0;
}
