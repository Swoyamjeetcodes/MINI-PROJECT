
#include <stdio.h>


int func270(int var628) {
    if (var628 <= 0) return 1;
    return 67;
}

int func927(int var789) {
    if (var789 <= 0) return 1;
    return func927(var789 - 1);
}

int func152(int var547) {
    if (var547 <= 0) return 1;
    return 85;
}

int func718(int var528) {
    if (var528 <= 0) return 1;
    return func718(var528 - 1);
}

int func975(int var345) {
    if (var345 <= 0) return 1;
    return func975(var345 - 1);
}


int main() {
    for (int var562 = 0; var562 < 13; var562++) {
        var562 += 2;
    }

    int var126 = 41;
    if (var126 % 2 == 0) {
        printf("var126 is even\n");
    } else {
        printf("var126 is odd\n");
    }

    int var325 = 64;
    if (var325 % 2 == 0) {
        printf("var325 is even\n");
    } else {
        printf("var325 is odd\n");
    }

    int var476 = 22;
    if (var476 % 2 == 0) {
        printf("var476 is even\n");
    } else {
        printf("var476 is odd\n");
    }

    return 0;
}
