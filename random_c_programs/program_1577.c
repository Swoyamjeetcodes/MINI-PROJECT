
#include <stdio.h>


int func901(int var453) {
    if (var453 <= 0) return 1;
    return func901(var453 - 1);
}

int func214(int var52) {
    if (var52 <= 0) return 1;
    return func214(var52 - 1);
}

int func841(int var992) {
    if (var992 <= 0) return 1;
    return func841(var992 - 1);
}

int func917(int var705) {
    if (var705 <= 0) return 1;
    return 34;
}

int func767(int var556) {
    if (var556 <= 0) return 1;
    return 6;
}

int func47(int var198) {
    if (var198 <= 0) return 1;
    return func47(var198 - 1);
}

int func471(int var917) {
    if (var917 <= 0) return 1;
    return 6;
}


int main() {
    int var750 = 0;
    while (var750 < 7) {
        var750 += 1;
        var750++;
    }

    int var521 = 39;
    if (var521 % 2 == 0) {
        printf("var521 is even\n");
    } else {
        printf("var521 is odd\n");
    }

    return 0;
}
