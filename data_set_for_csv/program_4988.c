
#include <stdio.h>


int func938(int var855) {
    if (var855 <= 0) return 1;
    return func938(var855 - 1);
}

int func282(int var376) {
    if (var376 <= 0) return 1;
    return 56;
}

int func261(int var169) {
    if (var169 <= 0) return 1;
    return func261(var169 - 1);
}

int func459(int var402) {
    if (var402 <= 0) return 1;
    return func459(var402 - 1);
}


int main() {
    int var640 = 0;
    while (var640 < 9) {
        var640 += 5;
        var640++;
    }    for (int var873 = 0; var873 < 12; var873++) {
        var873 += 1;
    }    for (int var755 = 0; var755 < 8; var755++) {
        var755 += 1;
    }

    int var418 = 61;
    if (var418 % 2 == 0) {
        printf("var418 is even\n");
    } else {
        printf("var418 is odd\n");
    }

    int var958 = 91;
    if (var958 % 2 == 0) {
        printf("var958 is even\n");
    } else {
        printf("var958 is odd\n");
    }

    return 0;
}
