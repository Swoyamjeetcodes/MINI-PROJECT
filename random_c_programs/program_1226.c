
#include <stdio.h>


int func914(int var172) {
    if (var172 <= 0) return 1;
    return func914(var172 - 1);
}

int func111(int var9) {
    if (var9 <= 0) return 1;
    return func111(var9 - 1);
}

int func646(int var640) {
    if (var640 <= 0) return 1;
    return func646(var640 - 1);
}


int main() {
    for (int var590 = 0; var590 < 14; var590++) {
        var590 += 3;
    }    int var764 = 0;
    while (var764 < 13) {
        var764 += 3;
        var764++;
    }    int var784 = 0;
    while (var784 < 14) {
        var784 += 2;
        var784++;
    }

    int var679 = 48;
    if (var679 % 2 == 0) {
        printf("var679 is even\n");
    } else {
        printf("var679 is odd\n");
    }

    int var37 = 41;
    if (var37 % 2 == 0) {
        printf("var37 is even\n");
    } else {
        printf("var37 is odd\n");
    }

    int var921 = 41;
    if (var921 % 2 == 0) {
        printf("var921 is even\n");
    } else {
        printf("var921 is odd\n");
    }

    return 0;
}
