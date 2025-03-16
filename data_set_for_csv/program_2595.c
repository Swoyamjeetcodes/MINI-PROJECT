
#include <stdio.h>


int func748(int var559) {
    if (var559 <= 0) return 1;
    return func748(var559 - 1);
}

int func678(int var821) {
    if (var821 <= 0) return 1;
    return func678(var821 - 1);
}

int func403(int var145) {
    if (var145 <= 0) return 1;
    return 42;
}


int main() {
    for (int var429 = 0; var429 < 12; var429++) {
        var429 += 2;
    }

    int var832 = 10;
    if (var832 % 2 == 0) {
        printf("var832 is even\n");
    } else {
        printf("var832 is odd\n");
    }

    int var344 = 21;
    if (var344 % 2 == 0) {
        printf("var344 is even\n");
    } else {
        printf("var344 is odd\n");
    }

    int var368 = 22;
    if (var368 % 2 == 0) {
        printf("var368 is even\n");
    } else {
        printf("var368 is odd\n");
    }

    return 0;
}
