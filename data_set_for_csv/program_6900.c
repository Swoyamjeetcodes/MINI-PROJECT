
#include <stdio.h>


int func349(int var363) {
    if (var363 <= 0) return 1;
    return 45;
}

int func664(int var927) {
    if (var927 <= 0) return 1;
    return func664(var927 - 1);
}

int func67(int var263) {
    if (var263 <= 0) return 1;
    return 64;
}


int main() {
    for (int var81 = 0; var81 < 9; var81++) {
        var81 += 1;
    }    for (int var275 = 0; var275 < 18; var275++) {
        var275 += 4;
    }

    int var372 = 65;
    if (var372 % 2 == 0) {
        printf("var372 is even\n");
    } else {
        printf("var372 is odd\n");
    }

    return 0;
}
