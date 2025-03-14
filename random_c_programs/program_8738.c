
#include <stdio.h>


int func757(int var939) {
    if (var939 <= 0) return 1;
    return func757(var939 - 1);
}

int func698(int var532) {
    if (var532 <= 0) return 1;
    return 21;
}

int func371(int var417) {
    if (var417 <= 0) return 1;
    return 81;
}


int main() {
    for (int var439 = 0; var439 < 8; var439++) {
        var439 += 2;
    }

    int var526 = 18;
    if (var526 % 2 == 0) {
        printf("var526 is even\n");
    } else {
        printf("var526 is odd\n");
    }

    int var625 = 86;
    if (var625 % 2 == 0) {
        printf("var625 is even\n");
    } else {
        printf("var625 is odd\n");
    }

    return 0;
}
