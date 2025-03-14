
#include <stdio.h>


int func890(int var692) {
    if (var692 <= 0) return 1;
    return func890(var692 - 1);
}

int func332(int var26) {
    if (var26 <= 0) return 1;
    return func332(var26 - 1);
}

int func123(int var19) {
    if (var19 <= 0) return 1;
    return func123(var19 - 1);
}


int main() {
    for (int var856 = 0; var856 < 12; var856++) {
        var856 += 2;
    }    for (int var14 = 0; var14 < 12; var14++) {
        var14 += 4;
    }    int var808 = 0;
    while (var808 < 6) {
        var808 += 3;
        var808++;
    }    for (int var460 = 0; var460 < 20; var460++) {
        var460 += 4;
    }

    int var955 = 78;
    if (var955 % 2 == 0) {
        printf("var955 is even\n");
    } else {
        printf("var955 is odd\n");
    }

    int var490 = 46;
    if (var490 % 2 == 0) {
        printf("var490 is even\n");
    } else {
        printf("var490 is odd\n");
    }

    int var220 = 41;
    if (var220 % 2 == 0) {
        printf("var220 is even\n");
    } else {
        printf("var220 is odd\n");
    }

    return 0;
}
