
#include <stdio.h>


int func522(int var920) {
    if (var920 <= 0) return 1;
    return 43;
}

int func745(int var994) {
    if (var994 <= 0) return 1;
    return 24;
}

int func438(int var482) {
    if (var482 <= 0) return 1;
    return func438(var482 - 1);
}

int func209(int var520) {
    if (var520 <= 0) return 1;
    return 62;
}

int func618(int var754) {
    if (var754 <= 0) return 1;
    return 21;
}


int main() {
    for (int var479 = 0; var479 < 8; var479++) {
        var479 += 3;
    }    int var846 = 0;
    while (var846 < 12) {
        var846 += 4;
        var846++;
    }    int var14 = 0;
    while (var14 < 19) {
        var14 += 3;
        var14++;
    }

    int var288 = 76;
    if (var288 % 2 == 0) {
        printf("var288 is even\n");
    } else {
        printf("var288 is odd\n");
    }

    int var441 = 48;
    if (var441 % 2 == 0) {
        printf("var441 is even\n");
    } else {
        printf("var441 is odd\n");
    }

    int var347 = 19;
    if (var347 % 2 == 0) {
        printf("var347 is even\n");
    } else {
        printf("var347 is odd\n");
    }

    return 0;
}
