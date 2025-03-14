
#include <stdio.h>


int func913(int var709) {
    if (var709 <= 0) return 1;
    return 15;
}

int func581(int var160) {
    if (var160 <= 0) return 1;
    return func581(var160 - 1);
}

int func912(int var678) {
    if (var678 <= 0) return 1;
    return func912(var678 - 1);
}


int main() {
    for (int var619 = 0; var619 < 19; var619++) {
        var619 += 5;
    }    for (int var628 = 0; var628 < 6; var628++) {
        var628 += 1;
    }    for (int var256 = 0; var256 < 17; var256++) {
        var256 += 3;
    }

    int var790 = 99;
    if (var790 % 2 == 0) {
        printf("var790 is even\n");
    } else {
        printf("var790 is odd\n");
    }

    int var886 = 16;
    if (var886 % 2 == 0) {
        printf("var886 is even\n");
    } else {
        printf("var886 is odd\n");
    }

    return 0;
}
