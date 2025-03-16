
#include <stdio.h>


int func267(int var209) {
    if (var209 <= 0) return 1;
    return func267(var209 - 1);
}

int func928(int var453) {
    if (var453 <= 0) return 1;
    return func928(var453 - 1);
}

int func253(int var745) {
    if (var745 <= 0) return 1;
    return func253(var745 - 1);
}

int func59(int var565) {
    if (var565 <= 0) return 1;
    return 86;
}


int main() {
    for (int var379 = 0; var379 < 19; var379++) {
        var379 += 4;
    }    for (int var274 = 0; var274 < 12; var274++) {
        var274 += 2;
    }

    int var471 = 43;
    if (var471 % 2 == 0) {
        printf("var471 is even\n");
    } else {
        printf("var471 is odd\n");
    }

    int var885 = 65;
    if (var885 % 2 == 0) {
        printf("var885 is even\n");
    } else {
        printf("var885 is odd\n");
    }

    return 0;
}
