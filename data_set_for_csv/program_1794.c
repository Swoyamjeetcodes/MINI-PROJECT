
#include <stdio.h>


int func424(int var509) {
    if (var509 <= 0) return 1;
    return func424(var509 - 1);
}

int func631(int var644) {
    if (var644 <= 0) return 1;
    return func631(var644 - 1);
}

int func606(int var522) {
    if (var522 <= 0) return 1;
    return func606(var522 - 1);
}

int func801(int var179) {
    if (var179 <= 0) return 1;
    return func801(var179 - 1);
}

int func858(int var362) {
    if (var362 <= 0) return 1;
    return func858(var362 - 1);
}

int func161(int var878) {
    if (var878 <= 0) return 1;
    return func161(var878 - 1);
}


int main() {
    int var513 = 0;
    while (var513 < 17) {
        var513 += 5;
        var513++;
    }    for (int var86 = 0; var86 < 5; var86++) {
        var86 += 5;
    }

    int var763 = 31;
    if (var763 % 2 == 0) {
        printf("var763 is even\n");
    } else {
        printf("var763 is odd\n");
    }

    int var174 = 72;
    if (var174 % 2 == 0) {
        printf("var174 is even\n");
    } else {
        printf("var174 is odd\n");
    }

    return 0;
}
