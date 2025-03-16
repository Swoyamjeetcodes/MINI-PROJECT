
#include <stdio.h>


int func422(int var337) {
    if (var337 <= 0) return 1;
    return func422(var337 - 1);
}

int func248(int var489) {
    if (var489 <= 0) return 1;
    return func248(var489 - 1);
}

int func82(int var358) {
    if (var358 <= 0) return 1;
    return func82(var358 - 1);
}

int func101(int var848) {
    if (var848 <= 0) return 1;
    return 63;
}


int main() {
    for (int var380 = 0; var380 < 6; var380++) {
        var380 += 5;
    }    for (int var166 = 0; var166 < 6; var166++) {
        var166 += 3;
    }    int var313 = 0;
    while (var313 < 10) {
        var313 += 4;
        var313++;
    }

    int var198 = 43;
    if (var198 % 2 == 0) {
        printf("var198 is even\n");
    } else {
        printf("var198 is odd\n");
    }

    int var160 = 89;
    if (var160 % 2 == 0) {
        printf("var160 is even\n");
    } else {
        printf("var160 is odd\n");
    }

    int var789 = 40;
    if (var789 % 2 == 0) {
        printf("var789 is even\n");
    } else {
        printf("var789 is odd\n");
    }

    return 0;
}
