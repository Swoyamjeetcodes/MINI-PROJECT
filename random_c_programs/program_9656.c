
#include <stdio.h>


int func431(int var913) {
    if (var913 <= 0) return 1;
    return func431(var913 - 1);
}

int func579(int var680) {
    if (var680 <= 0) return 1;
    return 35;
}

int func379(int var537) {
    if (var537 <= 0) return 1;
    return 81;
}


int main() {
    for (int var141 = 0; var141 < 8; var141++) {
        var141 += 5;
    }    int var581 = 0;
    while (var581 < 20) {
        var581 += 2;
        var581++;
    }

    int var727 = 90;
    if (var727 % 2 == 0) {
        printf("var727 is even\n");
    } else {
        printf("var727 is odd\n");
    }

    int var504 = 24;
    if (var504 % 2 == 0) {
        printf("var504 is even\n");
    } else {
        printf("var504 is odd\n");
    }

    int var393 = 76;
    if (var393 % 2 == 0) {
        printf("var393 is even\n");
    } else {
        printf("var393 is odd\n");
    }

    return 0;
}
