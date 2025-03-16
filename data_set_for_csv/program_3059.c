
#include <stdio.h>


int func960(int var886) {
    if (var886 <= 0) return 1;
    return 88;
}

int func912(int var176) {
    if (var176 <= 0) return 1;
    return 56;
}

int func184(int var504) {
    if (var504 <= 0) return 1;
    return 82;
}

int func1(int var197) {
    if (var197 <= 0) return 1;
    return func1(var197 - 1);
}


int main() {
    int var824 = 0;
    while (var824 < 15) {
        var824 += 4;
        var824++;
    }    int var654 = 0;
    while (var654 < 15) {
        var654 += 1;
        var654++;
    }    for (int var850 = 0; var850 < 17; var850++) {
        var850 += 4;
    }    int var67 = 0;
    while (var67 < 16) {
        var67 += 2;
        var67++;
    }    for (int var179 = 0; var179 < 10; var179++) {
        var179 += 3;
    }

    int var657 = 100;
    if (var657 % 2 == 0) {
        printf("var657 is even\n");
    } else {
        printf("var657 is odd\n");
    }

    int var876 = 83;
    if (var876 % 2 == 0) {
        printf("var876 is even\n");
    } else {
        printf("var876 is odd\n");
    }

    return 0;
}
