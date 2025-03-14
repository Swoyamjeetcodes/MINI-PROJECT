
#include <stdio.h>


int func358(int var131) {
    if (var131 <= 0) return 1;
    return 89;
}

int func906(int var655) {
    if (var655 <= 0) return 1;
    return func906(var655 - 1);
}

int func738(int var824) {
    if (var824 <= 0) return 1;
    return 85;
}

int func246(int var619) {
    if (var619 <= 0) return 1;
    return func246(var619 - 1);
}

int func563(int var946) {
    if (var946 <= 0) return 1;
    return 83;
}


int main() {
    for (int var314 = 0; var314 < 12; var314++) {
        var314 += 4;
    }

    int var994 = 64;
    if (var994 % 2 == 0) {
        printf("var994 is even\n");
    } else {
        printf("var994 is odd\n");
    }

    return 0;
}
