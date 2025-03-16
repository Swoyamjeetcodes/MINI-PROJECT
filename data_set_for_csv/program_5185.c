
#include <stdio.h>


int func924(int var433) {
    if (var433 <= 0) return 1;
    return func924(var433 - 1);
}

int func927(int var610) {
    if (var610 <= 0) return 1;
    return 40;
}

int func690(int var329) {
    if (var329 <= 0) return 1;
    return func690(var329 - 1);
}

int func704(int var759) {
    if (var759 <= 0) return 1;
    return 68;
}


int main() {
    int var1 = 0;
    while (var1 < 10) {
        var1 += 5;
        var1++;
    }    for (int var541 = 0; var541 < 19; var541++) {
        var541 += 3;
    }    for (int var864 = 0; var864 < 19; var864++) {
        var864 += 4;
    }

    int var765 = 10;
    if (var765 % 2 == 0) {
        printf("var765 is even\n");
    } else {
        printf("var765 is odd\n");
    }

    int var993 = 74;
    if (var993 % 2 == 0) {
        printf("var993 is even\n");
    } else {
        printf("var993 is odd\n");
    }

    int var688 = 30;
    if (var688 % 2 == 0) {
        printf("var688 is even\n");
    } else {
        printf("var688 is odd\n");
    }

    return 0;
}
