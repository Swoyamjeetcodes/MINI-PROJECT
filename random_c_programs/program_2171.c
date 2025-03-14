
#include <stdio.h>


int func942(int var750) {
    if (var750 <= 0) return 1;
    return 9;
}

int func402(int var898) {
    if (var898 <= 0) return 1;
    return func402(var898 - 1);
}


int main() {
    for (int var397 = 0; var397 < 6; var397++) {
        var397 += 1;
    }    for (int var490 = 0; var490 < 14; var490++) {
        var490 += 5;
    }

    int var622 = 97;
    if (var622 % 2 == 0) {
        printf("var622 is even\n");
    } else {
        printf("var622 is odd\n");
    }

    int var703 = 87;
    if (var703 % 2 == 0) {
        printf("var703 is even\n");
    } else {
        printf("var703 is odd\n");
    }

    int var705 = 87;
    if (var705 % 2 == 0) {
        printf("var705 is even\n");
    } else {
        printf("var705 is odd\n");
    }

    return 0;
}
