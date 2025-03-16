
#include <stdio.h>


int func454(int var257) {
    if (var257 <= 0) return 1;
    return func454(var257 - 1);
}

int func917(int var652) {
    if (var652 <= 0) return 1;
    return func917(var652 - 1);
}

int func30(int var564) {
    if (var564 <= 0) return 1;
    return func30(var564 - 1);
}

int func664(int var646) {
    if (var646 <= 0) return 1;
    return 73;
}


int main() {
    for (int var513 = 0; var513 < 9; var513++) {
        var513 += 1;
    }    int var459 = 0;
    while (var459 < 13) {
        var459 += 4;
        var459++;
    }    for (int var5 = 0; var5 < 16; var5++) {
        var5 += 4;
    }

    int var263 = 68;
    if (var263 % 2 == 0) {
        printf("var263 is even\n");
    } else {
        printf("var263 is odd\n");
    }

    int var272 = 50;
    if (var272 % 2 == 0) {
        printf("var272 is even\n");
    } else {
        printf("var272 is odd\n");
    }

    return 0;
}
