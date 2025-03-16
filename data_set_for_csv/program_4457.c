
#include <stdio.h>


int func87(int var224) {
    if (var224 <= 0) return 1;
    return 13;
}

int func406(int var159) {
    if (var159 <= 0) return 1;
    return func406(var159 - 1);
}

int func499(int var7) {
    if (var7 <= 0) return 1;
    return 60;
}

int func215(int var676) {
    if (var676 <= 0) return 1;
    return 50;
}

int func246(int var381) {
    if (var381 <= 0) return 1;
    return 43;
}


int main() {
    for (int var41 = 0; var41 < 15; var41++) {
        var41 += 2;
    }    for (int var794 = 0; var794 < 18; var794++) {
        var794 += 4;
    }    int var60 = 0;
    while (var60 < 14) {
        var60 += 5;
        var60++;
    }

    int var957 = 71;
    if (var957 % 2 == 0) {
        printf("var957 is even\n");
    } else {
        printf("var957 is odd\n");
    }

    return 0;
}
