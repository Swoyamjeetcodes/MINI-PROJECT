
#include <stdio.h>


int func768(int var454) {
    if (var454 <= 0) return 1;
    return func768(var454 - 1);
}

int func706(int var757) {
    if (var757 <= 0) return 1;
    return func706(var757 - 1);
}


int main() {
    int var399 = 0;
    while (var399 < 10) {
        var399 += 4;
        var399++;
    }

    int var933 = 17;
    if (var933 % 2 == 0) {
        printf("var933 is even\n");
    } else {
        printf("var933 is odd\n");
    }

    int var688 = 69;
    if (var688 % 2 == 0) {
        printf("var688 is even\n");
    } else {
        printf("var688 is odd\n");
    }

    int var485 = 93;
    if (var485 % 2 == 0) {
        printf("var485 is even\n");
    } else {
        printf("var485 is odd\n");
    }

    return 0;
}
