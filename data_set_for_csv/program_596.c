
#include <stdio.h>


int func839(int var565) {
    if (var565 <= 0) return 1;
    return 94;
}

int func63(int var87) {
    if (var87 <= 0) return 1;
    return 91;
}

int func497(int var883) {
    if (var883 <= 0) return 1;
    return func497(var883 - 1);
}

int func637(int var362) {
    if (var362 <= 0) return 1;
    return 65;
}


int main() {
    for (int var502 = 0; var502 < 16; var502++) {
        var502 += 5;
    }    for (int var713 = 0; var713 < 11; var713++) {
        var713 += 3;
    }

    int var809 = 29;
    if (var809 % 2 == 0) {
        printf("var809 is even\n");
    } else {
        printf("var809 is odd\n");
    }

    int var414 = 39;
    if (var414 % 2 == 0) {
        printf("var414 is even\n");
    } else {
        printf("var414 is odd\n");
    }

    int var153 = 57;
    if (var153 % 2 == 0) {
        printf("var153 is even\n");
    } else {
        printf("var153 is odd\n");
    }

    return 0;
}
