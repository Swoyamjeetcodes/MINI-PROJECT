
#include <stdio.h>


int func428(int var229) {
    if (var229 <= 0) return 1;
    return 51;
}

int func471(int var878) {
    if (var878 <= 0) return 1;
    return 99;
}

int func310(int var67) {
    if (var67 <= 0) return 1;
    return func310(var67 - 1);
}


int main() {
    for (int var37 = 0; var37 < 11; var37++) {
        var37 += 3;
    }    for (int var54 = 0; var54 < 17; var54++) {
        var54 += 1;
    }

    int var948 = 32;
    if (var948 % 2 == 0) {
        printf("var948 is even\n");
    } else {
        printf("var948 is odd\n");
    }

    return 0;
}
