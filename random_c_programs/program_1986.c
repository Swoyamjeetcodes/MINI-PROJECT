
#include <stdio.h>


int func590(int var413) {
    if (var413 <= 0) return 1;
    return 90;
}

int func338(int var519) {
    if (var519 <= 0) return 1;
    return func338(var519 - 1);
}

int func415(int var456) {
    if (var456 <= 0) return 1;
    return 79;
}

int func214(int var447) {
    if (var447 <= 0) return 1;
    return 42;
}


int main() {
    for (int var463 = 0; var463 < 8; var463++) {
        var463 += 1;
    }

    int var377 = 14;
    if (var377 % 2 == 0) {
        printf("var377 is even\n");
    } else {
        printf("var377 is odd\n");
    }

    int var234 = 11;
    if (var234 % 2 == 0) {
        printf("var234 is even\n");
    } else {
        printf("var234 is odd\n");
    }

    int var960 = 86;
    if (var960 % 2 == 0) {
        printf("var960 is even\n");
    } else {
        printf("var960 is odd\n");
    }

    return 0;
}
